//test_9
#include<stdio.h>
int main(void){
	int n;
	scanf("%d", &n);
	for (int i = 2 * n - 1; i > 0; i--){	// 5 4 3 2 1
		for (int j = 0; j < (n - i) * 2; j++){
			printf(" ");
		}
		for (int j = 0; j < i; j++){
			(j < n * 2 - i) ? printf("# ") : NULL;
		}
		putchar('\n');
	}
}
