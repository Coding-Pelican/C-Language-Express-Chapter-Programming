#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 5
int main(void){
	int scores[SIZE];
	srand((unsigned)time(NULL));
	for(int i = 0; i < SIZE; i++){
		scores[i] = rand() % 100;
	}
	for(int i = 0; i < SIZE; i++){
		printf("scores[%d] = %d\n", i, scores[i]);
	}
}
