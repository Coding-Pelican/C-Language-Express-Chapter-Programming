//coin_toss
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int coin_toss(void);
int main(void){
	int heads = 0;
	int tails = 0;
	srand((unsigned)time(NULL));
	
	for (int toss = 0; toss < 100; toss++){
		coin_toss() == 1 ? heads++ : tails++;
	}
	printf("heads = %d\n", heads);
	printf("tails = %d\n", tails);
}

int coin_toss(void){
	return rand() % 2;
}
