#include <stdio.h>
#define P(X, Y) (printf("i = %d, pi = %p\n", X, Y))

int main(void) {
	int i = 10;
	int *pi = &i;
	P(i, pi);
	(*pi)++;
	P(i, pi);
	
	P(i, pi);
	*pi++;
	P(i, pi);
}
