//factorial
#include<stdio.h>
int factorial(int _n){
	return _n == 1 ? 1 : _n * factorial(_n - 1);
}

int main(void){
	int n;
	scanf("%d", &n);
	printf("%d! = %d", n, factorial(n));
}
