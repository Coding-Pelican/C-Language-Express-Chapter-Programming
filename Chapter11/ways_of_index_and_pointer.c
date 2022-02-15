#include <stdio.h>

int getSum2(int a[], int n);
int getSum1(int a[], int n);

int main(void) {
	int a[3] = { 1, 2, 3 };
	printf("%d\n", getSum1(a, 3));
	printf("%d\n", getSum2(a, 3));
}

int getSum1(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}
int getSum2(int a[], int n) {
	int *p;
	int sum = 0;
	p = a;
	for (int i = 0; i < n; i++) {
		sum += *p++;
	}
	return sum;
}
