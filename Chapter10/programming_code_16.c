// programming_code_16
// base roguelike game

#include "programming_code_16.h"

struct Setting {
	int width_size;
	int height_size;
	int min_num_of_spawning_enemies;
	int max_num_of_spawning_enemies;
	Position player_spawn_pos;
	Position gold_spawn_pos;
	Position direction[4];
} environment;

typedef struct GameObject {
	int id;
	TypeOfObject object;
	Position position;
	TypeOfObject current_position_object;
} GameObject;

struct GameData {
	int isGameover;
	int isClear;
	int isDied;

	int** map;
	GameObject player;
	GameObject* enemy;
	GameObject gold;
	Position player_pos;
	Position* enemy_pos;
	Position gold_pos;
	int current_enemy_count;
} data;

int main(void) {
	char ch = ' ';
	const char available_key[9] = "wasdWASD";
	initialize();
	while (data.isGameover == FALSE) {
		display_map();
		inputKey(ch, available_key);
		for (int i = 0; i < data.current_enemy_count; i++) {
			moveEnemy(i, rand() % 5);
			detectPlayer(Enemy, i);
		}
		detectPlayer(Gold, 0);
		delay(20);
		clearScreen();
	}
	checkGameoverCondition();
	gameExit();
}

void gameExit() {
	free(data.map);
	free(data.enemy_pos);
	return exit(0);
}

void checkGameoverCondition() {
	if (data.isGameover == TRUE) {
		if (data.isClear == TRUE && data.isDied == FALSE) {
			puts("Clear!");
		}
		else if (data.isClear == FALSE && data.isDied == TRUE) {
			puts("Your Died");
		}
		else {
			puts("Error");
			delay(1000);
			return main();
		}
	}
}

void movePlayer(int direction) {
	Position position_to_move;
	position_to_move = addPosition(data.player_pos, environment.direction[direction]);
	if (!(position_to_move.x < 0 || position_to_move.x > environment.width_size - 1 || position_to_move.y < 0 ||
		position_to_move.y > environment.height_size - 1)) {
		data.map[data.player_pos.x][data.player_pos.y] = None;
		data.player_pos = position_to_move;
		spawnObject(Player, data.player_pos, data.map);
	}
}

void moveEnemy(int idx, int direction) {
	Position position_to_move;
	position_to_move = addPosition(data.enemy_pos[idx], environment.direction[direction]);
	if (direction < 4) {
		if (!(position_to_move.x < 0 || position_to_move.x > environment.width_size - 1 || position_to_move.y < 0 ||
			position_to_move.y > environment.height_size - 1 || distance(position_to_move, data.gold_pos) < 1)) {
			data.map[data.enemy_pos[idx].x][data.enemy_pos[idx].y] = None;
			data.enemy_pos[idx] = position_to_move;
			spawnObject(Enemy, data.enemy_pos[idx], data.map);
		}
	}
}

void detectPlayer(TypeOfObject* object, int idx) {
	if (object == Enemy) {
		if (distance(data.enemy_pos[idx], data.player_pos) < 1) {
			data.isDied = TRUE;
			data.isGameover = TRUE;
		};
	}
	else if (object == Gold) {
		if (distance(data.gold_pos, data.player_pos) < 1) {
			data.isClear = TRUE;
			data.isGameover = TRUE;
		};
	}
}

double distance(Position u, Position v) { return sqrt(pow(v.x - u.x, 2) + pow(u.y - v.y, 2)); }

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
		key = _getch();
		if (key == available_key[0] || key == available_key[4] || key == Up) {
			movePlayer(North);
			break;
		}
		else if (key == available_key[1] || key == available_key[5] || key == Left) {
			movePlayer(West);
			break;
		}
		else if (key == available_key[2] || key == available_key[6] || key == Down) {
			movePlayer(South);
			break;
		}
		else if (key == available_key[3] || key == available_key[7] || key == South) {
			movePlayer(East);
			break;
		}
		else if (key == Space) {
			break;
		}
		else {
			if (key == Esc) {
				gameExit();
			}
			else {
				continue;
			}
		}
	} while (TRUE);
}

void delay(clock_t n) {
	clock_t start = clock();
	while (clock() - start < n) {
	};
}

void hideCursor() {
	CONSOLE_CURSOR_INFO cursorInfo = {
		0,
	};
	cursorInfo.bVisible = 0;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

void clearScreen() {
	HANDLE hStdOut;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	DWORD count;
	DWORD cellCount;
	COORD homeCoords = { 0, 0 };

	hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hStdOut == INVALID_HANDLE_VALUE) return;

	/* Get the number of cells in the current buffer */
	if (!GetConsoleScreenBufferInfo(hStdOut, &csbi)) return;
	cellCount = csbi.dwSize.X * csbi.dwSize.Y;

	/* Fill the entire buffer with spaces */
	if (!FillConsoleOutputCharacter(hStdOut, (TCHAR)' ', cellCount, homeCoords, &count)) return;

	/* Fill the entire buffer with the current colors and attributes */
	if (!FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, cellCount, homeCoords, &count)) return;

	/* Move the cursor home */
	SetConsoleCursorPosition(hStdOut, homeCoords);
}

void setScreenSize(int cols, int lines) {
	char str[100];
	sprintf(str, "mode con:cols=%d lines=%d", cols, lines);
	system(str);
}

void display_map() {
	for (int y = 0; y < environment.height_size; y++) {
		for (int x = 0; x < environment.width_size; x++) {
			if (data.map[x][y] == Player) {
				printf("@");
			}
			else if (data.map[x][y] == Enemy) {
				printf("M");
			}
			else if (data.map[x][y] == Gold) {
				printf("G");
			}
			else {
				printf(".");
			}
		}
		printf("\n");
	}
	printf("\n");
}

int existsObject(TypeOfObject object, Position at, int** on) { return on[at.x][at.y] == object ? TRUE : FALSE; }
void spawnObject(TypeOfObject object, Position at, int** on) { on[at.x][at.y] = object; }

void createMap() {
	data.map = (int**)calloc(environment.width_size, sizeof(int));
	for (int i = 0; i < environment.height_size; i++) {
		data.map[i] = (int*)calloc(environment.height_size, sizeof(int));
	}
}

int getNumberOfDigits(int n) { return floor(log10(n) + 1); }

void setSettingAsDefault() {
	data.isGameover = FALSE;
	data.isClear = FALSE;
	data.isDied = FALSE;

	environment.width_size = 20;
	environment.height_size = 20;
	environment.min_num_of_spawning_enemies = 2;
	environment.max_num_of_spawning_enemies = 10;
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
	data.enemy_pos = (int*)calloc(data.current_enemy_count, sizeof(int));
}

void initialize() {
	srand((unsigned)time(NULL));
	setSettingAsDefault();
	// screenMode(environment.width_size, environment.height_size + 2);
	puts("start init...");
	puts("default setting clear!");
	createMap();
	puts("created map");

	do {
		environment.player_spawn_pos = setPosition(rand() % environment.width_size, rand() % environment.height_size);
	} while (existsObject(Player, environment.player_spawn_pos, data.map) == TRUE);
	data.player_pos = environment.player_spawn_pos;
	spawnObject(Player, data.player_pos, data.map);
	puts("spawned Player!");

	do {
		environment.gold_spawn_pos = setPosition(rand() % environment.width_size, rand() % environment.height_size);
	} while (existsObject(Gold, environment.gold_spawn_pos, data.map) == TRUE || distance(environment.gold_spawn_pos, environment.player_spawn_pos) < 10);
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
	delay(1000);
	hideCursor();
	clearScreen();
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
