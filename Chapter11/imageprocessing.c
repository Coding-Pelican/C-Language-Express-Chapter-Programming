#include <stdio.h>
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define SIZE (5)

void brightenImage(int image[SIZE][SIZE]);
void printImage(int image[SIZE][SIZE]);

int main(void) {
	int image[SIZE][SIZE] = {
	{ 10, 20, 30, 40, 50 },
	{ 10, 20, 30, 40, 50 },
	{ 10, 20, 30, 40, 50 },
	{ 10, 20, 30, 40, 50 },
	{ 10, 20, 30, 40, 50 }
	};
	printImage(image);
	brightenImage(image);
	printImage(image);
}

void printImage(int image[SIZE][SIZE]) {
	int r, c;
	REP(r, 0, SIZE - 1) {
		REP(c, 0, SIZE - 1) {
			printf("%03d ", image[r][c]);
		}
		printf("\n");
	}
	printf("\n");
}
void brightenImage(int image[SIZE][SIZE]) {
	int r, c;
	int *p;
	p = &image[0][0];
	REP(r, 0, SIZE - 1) {
		REP(c, 0, SIZE - 1) {
			*p += 10;
			p++;
		}
	}
}
