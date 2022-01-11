//combination
#include<stdio.h>
int get_integer();
int factorial(int _n, int _end);
long combination(int n, int r);

int main(void){
	int n = get_integer();
	int r = get_integer();
	
	printf("%dC%d = %d", n, r, combination(n, r));
}

long combination(int _n, int _r){
	return _r < _n / 2 ? factorial(_n, _n - _r + 1) / factorial(_r, 1) : factorial(_n, _n - (_n - _r) + 1) / factorial(_n - _r, 1);
}

int factorial(int _n, int _end){
	return _n == _end - 1 ? 1 : _n * factorial(_n - 1, _end);
}

int get_integer(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	return n;
}
