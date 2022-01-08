//test_3
#include<stdio.h>
int main(void) {
	int n;
	scanf_s("%d", &n);//n=3
	for (int i = 2 * n - 1; i > 0; i--) { //5 4 3 2 1
		for (int j = 0; j < i; j++) { // 0 1 2 3 4
			(j < n * 2 - i) ? printf("*") : NULL;
		}
		putchar('\n');
	}
}
