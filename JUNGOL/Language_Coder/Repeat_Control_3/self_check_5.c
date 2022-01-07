//self_check_5
#include <stdio.h>
int main(void){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for (int j = 0; j < i; j++){
			printf(" ");
		}
		for (int j = 2*(n-i)-1; j > 0; j--){
			printf("*");
		}
		putchar('\n');
	}
}
