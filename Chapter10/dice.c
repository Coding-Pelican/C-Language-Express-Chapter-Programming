#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
	int freq[6] = { 0,};
	srand((unsigned)time(NULL));
	for(int i = 0; i < 10000; i++){
		++freq[rand() % 6];
	}
	for(int i = 0; i < 6; i++){
		printf("%2d %d \n", i + 1, freq[i]);
	}
}
