//test_4
#include<stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = 0; j < (2 * n - 1) - i * 2; j++) {
			printf("*");
		}
		putchar('\n');
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			printf(" ");
		}
		for (int j = 0; j <= i * 2; j++) {
			printf("*");
		}
		putchar('\n');
	}
}
