#include<stdio.h>
#define SIZE 5
int get_integer_test(int value);
int main(void){
	int scores[SIZE];
	int sum, avg;
	for(int i = 0; i < SIZE; i++){
		printf("Enter the student's score: ");
		scores[i] = get_integer_test((i + 1) * 10);
	}
	for(int i = 0; i < SIZE; i++){
		sum += scores[i];
	}
	avg = sum / SIZE;
	printf("avg = %d\n", avg);
}
int get_integer_test(int value){
	printf("%d\n", value);
	return value;
}
