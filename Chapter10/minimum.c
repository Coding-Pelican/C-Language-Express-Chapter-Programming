#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void print_horizontal_line(int n);
int min_comparison(int n, int m);

int main(void){
	srand((unsigned)time(NULL));
	int prices[SIZE] = { 0, };
	int min;
	
	print_horizontal_line(SIZE);
	for (int i = 0; i < SIZE; i++) {
		printf("%3d ", i);
	}
	putchar('\n');
	for (int i = 0; i < SIZE; i++) {
		prices[i] = rand()%100 + 1;
		printf("%3d ", prices[i]);
	}
	putchar('\n');
	print_horizontal_line(SIZE);
	
	min = prices[0];
	for (int i = 0; i < SIZE - 1; i++) {
		min = min_comparison(min, prices[i + 1]);
	}
	printf("Minimum is %d\n", min);
}

int min_comparison(int n, int m) { return n < m ? n : m; }
void print_horizontal_line(int n){ 
	for(int i = 0; i < n * 4; i++){
		printf("-");
	}
	putchar('\n');
}
