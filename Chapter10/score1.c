#include<stdio.h>
int main(void){
	int scores[5];
	for(int i = 0; i < sizeof(scores)/sizeof(int); i++){
		scores[i] = (i + 1) * 10;
	}
	for(int i = 0; i < sizeof(scores)/sizeof(int); i++){
		printf("scores[%d] = %d\n", i, scores[i]);
	}
}
