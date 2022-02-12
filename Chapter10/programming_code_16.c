//programming_code_16
//base roguelike game

#include "test.h"

#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

struct Setting {
    int width_size;
    int height_size;
    int min_num_of_spawning_enemies;
    int max_num_of_spawning_enemies;
    Position player_spawn_pos;
    Position gold_spawn_pos;
    Position direction[4];
} environment;

struct GameData {
    int isGameover;
    int isClear;
    int isDied;

    int **map;
    Position player_pos;
    Position *enemy_pos;
    Position gold_pos;
    int current_enemy_count;
} data;

int main(void) {
    char ch = ' ';
    char available_key[9] = "wasdWASD";
    initialize();
    for (int i = 0; i < 10; i++) {
        display_map();
        inputKey(ch, available_key);
        delay(500);
        clear_screen();
    }
}

void movePlayer(int direction) {
    data.map[data.player_pos.x][data.player_pos.y] = None;
    data.player_pos = addPosition(data.player_pos, environment.direction[direction]);
    spawnObject(Player, data.player_pos, data.map);
}

Position addPosition(Position u, Position v) {
    Position temp;
    temp.x = (int)u.x + (int)v.x;
    temp.y = (int)u.y + (int)v.y;
    return temp;
}

Position setPosition(int x, int y) {
    Position temp;
    temp.x = x;
    temp.y = y;
    return temp;
}

void inputKey(char key, char available_key[]) {
    do {
        key = 'a';
        if (key == available_key[0] || key == available_key[4]) {
            movePlayer(North);
            break;
        } else if (key == available_key[1] || key == available_key[5]) {
            movePlayer(East);
            break;
        } else if (key == available_key[2] || key == available_key[6]) {
            movePlayer(South);
            break;
        } else if (key == available_key[3] || key == available_key[7]) {
            movePlayer(West);
            break;
        } else {
            continue;
        }
    } while (TRUE);
}

void delay(clock_t n) {
    clock_t start = clock();
    while (clock() - start < n) {
    };
}

void clear_screen() { system("cls"); }

void display_map() {
    for (int x = 0; x < environment.width_size; x++) {
        for (int y = 0; y < environment.height_size; y++) {
            if (data.map[y][x] == Player) {
                printf("@");
            } else if (data.map[y][x] == Enemy) {
                printf("M");
            } else if (data.map[y][x] == Gold) {
                printf("G");
            } else {
                printf(".");
            }
        }
        printf("\n");
    }
}

int existsObject(TypeOfObject object, Position at, int **on) { return on[at.x][at.y] == object ? TRUE : FALSE; }
void spawnObject(TypeOfObject object, Position at, int **on) { on[at.x][at.y] = object; }

void createMap() {
    data.map = (int **)calloc(environment.width_size, sizeof(int));
    for (int i = 0; i < environment.width_size; i++) {
        data.map[i] = (int *)calloc(environment.height_size, sizeof(int));
    }
}

void setSettingAsDefault() {
    data.isGameover = FALSE;
    data.isClear = FALSE;
    data.isDied = FALSE;

    environment.width_size = 20;
    environment.height_size = 20;
    environment.max_num_of_spawning_enemies = 10;
    environment.min_num_of_spawning_enemies = 2;
    environment.direction[North] = setPosition(0, -1);
    environment.direction[East] = setPosition(1, 0);
    environment.direction[South] = setPosition(0, 1);
    environment.direction[West] = setPosition(-1, 0);
    environment.player_spawn_pos = setPosition(0, 0);
    environment.gold_spawn_pos = setPosition(0, 0);

    data.player_pos = environment.player_spawn_pos;
    data.gold_pos = environment.gold_spawn_pos;
    data.current_enemy_count =
        environment.min_num_of_spawning_enemies + (rand() % (environment.max_num_of_spawning_enemies - (environment.min_num_of_spawning_enemies - 1)));
    data.enemy_pos = (int *)calloc(data.current_enemy_count, sizeof(int));
}

void initialize() {
    puts("start init...");
    srand((unsigned)time(NULL));
    setSettingAsDefault();
    puts("default setting clear!");
    createMap();
    display_map();
    puts("created map");

    do {
        environment.player_spawn_pos = setPosition(rand() % environment.width_size, rand() % environment.height_size);
    } while (existsObject(Player, environment.player_spawn_pos, data.map) == TRUE);
    data.player_pos = environment.player_spawn_pos;
    spawnObject(Player, data.player_pos, data.map);
    puts("spawned Player!");

    do {
        environment.gold_spawn_pos = setPosition(rand() % environment.width_size, rand() % environment.height_size);
    } while (existsObject(Gold, environment.gold_spawn_pos, data.map) == TRUE);
    data.gold_pos = environment.gold_spawn_pos;
    spawnObject(Gold, data.gold_pos, data.map);
    puts("spawned Gold!");

    for (int i = 0; i < data.current_enemy_count; i++) {
        do {
            data.enemy_pos[i] = setPosition(rand() % environment.width_size, rand() % environment.height_size);
            puts("checking Enemy position...");
        } while (!(data.map[data.enemy_pos[i].x][data.enemy_pos[i].y] == None));
        spawnObject(Enemy, data.enemy_pos[i], data.map);
        puts("Spawned Enemy!");
    }
    puts("initialization Complete!");
}

char getChar() {
    char ch;
    printf(">> ");
    scanf(" %c", &ch);
    return ch;
}

int getInt() {
    int n;
    printf(">> ");
    scanf("%d", &n);
    return n;
}

//map 표현 및 좌표값 설정 수정 필요
