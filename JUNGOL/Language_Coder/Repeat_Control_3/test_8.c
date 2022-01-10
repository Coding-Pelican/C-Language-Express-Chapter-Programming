//test_8
#include<stdio.h>
int main(void){
	int cnt = 1;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < i * 2; j++){
			printf(" ");
		}
		for (int j = 0; j < n - i; j++){
			printf("%d ", cnt++);
		}
		putchar('\n');
	}
}
