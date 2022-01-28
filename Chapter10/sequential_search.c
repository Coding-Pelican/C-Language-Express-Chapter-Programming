#include <stdio.h>
#define SIZE 10

int main(void) {
	int key;
	int list[SIZE] = { 0, };
	for (int i = 0; i < SIZE; i++) {
		list[i] = i + 1;
	}
	scanf("%d", &key);
	for (int i = 0; i < SIZE; i++) {
		if (list[i] == key) {
			puts("Found Successfully");
		}
	}
	puts("End Search");
}
