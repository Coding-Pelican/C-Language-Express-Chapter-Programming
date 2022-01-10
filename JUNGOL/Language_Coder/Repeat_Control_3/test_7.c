//test_7
#include<stdio.h>
int main(void){
	int ch = 'A', cnt = 0;
	int n;
	scanf("%d", &n);
	for (int i = n; i > 0; i--){
		for(int j = 0;  j < i; j++){
			printf("%c ", ch++);
		}
		for (int j = 0; j < n - i; j++){
			printf("%d ", cnt++);
		}
		putchar('\n');
	}
}
