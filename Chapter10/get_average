#include <stdio.h>
#define SIZE 5

int get_avg(int scores[]);

int main(void) {
	int scores[SIZE] = { 0, };
	for (int i = 0; i < SIZE; i++) {
		scores[i] = i + 1;
	}
	printf("Average is %d\n", get_avg(scores));
}

int get_avg(int scores[]) {
	int sum = 0;
	for (int i = 0; i < SIZE; i++) {
		sum += scores[i];
	}
	return sum / SIZE; 
}
