//test_5
#include<stdio.h>
int main(void){
	int n;
	scanf("%d", &n);
	for(int i = n; i > 0; i--){
		for (int j = 0; j < 2 * i - 2; j++){
			printf(" ");
		}
		for (int j = 0; j < 2 * (n - (i - 1)) - 1; j++){
			printf("*");
		}
		putchar('\n');
	}
}
