//test_10
#include<stdio.h>
int main(void){
	int cnt = 0;
	int n;
	scanf("%d", &n);
	for(int i = n; i > 0; i--){
		for (int j = n; j > 0; j--){
			++cnt == 6 ? printf("%d ", cnt = 1) : printf("%d ", 2 * cnt - 1);
		}
		putchar('\n');
	}	
}
