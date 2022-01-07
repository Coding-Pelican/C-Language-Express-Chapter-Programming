#include <stdio.h>
int main(void){
	int n;
	scanf("%d", &n);
	for(int i = n; i > 0; i--){
		for (int j = 0; j < i+1; j++){
			printf("*");
		}
		putchar('\n');
	}
	for(int i = 0; i < n; i++){
		for (int j = 0; j < i+1; j++){
			printf("*");
		}
		putchar('\n');
	}
}
