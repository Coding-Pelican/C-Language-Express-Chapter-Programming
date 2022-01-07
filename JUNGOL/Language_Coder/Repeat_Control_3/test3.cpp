#include<stdio.h>
int main(void){
	int n;
	scanf("%d", &n);
	for(int i = 2 * n - 1; i > 0; i--){ // 5 4 3 2 1
		for (int j = 0; j < i; j++){ // 0 1 2 3 4
			((i - n) <= 0) ? printf("*") : !(j + 1 < i - ((2*n-2) - (2 * j)))? printf("*") : NULL;
		}
		putchar('\n');
	}
}
