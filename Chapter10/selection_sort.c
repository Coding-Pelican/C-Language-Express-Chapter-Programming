#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(void) {
	int list[SIZE] = { 0, };
	int least, temp;
	srand((unsigned)time(NULL));
	for (int i = 0; i < SIZE; i++) {
		list[i] = rand() % SIZE;
	}
	for (int i = 0; i < SIZE - 1; i++){
		least = i;
		for ( int j = i + 1; j < SIZE; j++) {
			if (list[j] < list[least]) {
				least = j;
			}
		}
		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
	}
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", list[i]);
	}
	putchar('\n');
}
