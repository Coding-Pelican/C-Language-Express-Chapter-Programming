//programming_code_16
//base roguelike game
#pragma once
#include <time.h>
typedef enum TypeOfObject { None = 0, Player, Enemy, Gold } TypeOfObject;
typedef enum TypeOfDirection { North = 0, East, South, West } TypeOfDirection;
typedef struct Position {
    int x;
    int y;
} Position;
void movePlayer(int direction);
Position addPosition(Position u, Position v);
Position setPosition(int x, int y);
void inputKey(char key, char available_key[]);
void delay(clock_t n);
void clear_screen();
void display_map();
int existsObject(TypeOfObject object, Position at, int** on);
void spawnObject(TypeOfObject object, Position at, int** on);
void createMap();
void setSettingAsDefault();
void initialize();
char getChar();
int getInt();
