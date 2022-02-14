// programming_code_16
// base roguelike game

#pragma once
#pragma warning(disable: 4996)
#include <Windows.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define FALSE 0
#define TRUE 1
typedef enum TypeOfObject { None = 0, Player, Enemy, Gold } TypeOfObject;
typedef enum TypeOfDirection { North = 0, East, South, West } TypeOfDirection;
enum keyboard { Up = 72, Left = 75, Right = 77, Down = 80, Space = 32, Esc = 27 };
typedef struct Position {
	int x;
	int y;
} Position;
void checkGameoverCondition();
void movePlayer(int direction);
void moveEnemy(int idx, int direction);
void detectPlayer(TypeOfObject* object, int idx);
double distance(Position u, Position v);
Position addPosition(Position u, Position v);
Position setPosition(int x, int y);
void inputKey(char key, char available_key[]);
void delay(clock_t n);
void hideCursor();
void clearScreen();
void setScreenSize(int cols, int lines);
void display_map();
int existsObject(TypeOfObject object, Position at, int** on);
void spawnObject(TypeOfObject object, Position at, int** on);
void createMap();
int getNumberOfDigits(int n);
void setSettingAsDefault();
void initialize();
char getChar();
int getInt();
