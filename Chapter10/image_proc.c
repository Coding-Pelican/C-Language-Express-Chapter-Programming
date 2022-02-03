#include <stdio.h>

void inverse(int image[8][16]);
void display(int image[8][16]);
int main(void) {
	int image[8][16] = {
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1 },
	{ 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	};
	puts("raw image");
	display(image);
	putchar('\n');
	inverse(image);
	puts("inversed image");
	display(image);
}

void display(int image[8][16]) {
	for (int r = 0; r < 8; r++) {
		for (int c = 0; c < 16; c++) {
			if (image[r][c] == 0) {
				printf("*");
			} else {
				printf("_");
			}
		}
		printf("\n");
	}
}
void inverse(int image[8][16]) {
	for (int r = 0; r < 8; r++) {
		for (int c = 0; c < 16; c++) {
			if (image[r][c] == 0) {
				image[r][c] = 1;
			} else {
				image[r][c] = 0;
			}
		}
	}
}
