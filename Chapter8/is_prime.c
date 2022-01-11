//is_prime
#include<stdio.h>
#define TRUE 1
#define FALSE 0
int is_prime(int _n);
int get_integer();
int main(void){
	int n = get_integer();
	printf("%d is ", n);
	is_prime(n) == FALSE ? puts("not prime.") : puts("prime.");
} 

int get_integer(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	return n;
}

int is_prime(int _n){
	for (int i = 2; i < _n; i++){
		if (_n % i == 0){
			return FALSE;
		}
	}
	return TRUE;
}
