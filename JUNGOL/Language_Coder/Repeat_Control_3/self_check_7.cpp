#include<stdio.h>
int main(void){
	int num = 1, ch = 'A';
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for (int j = n - i; j > 0; j--){
			printf("%d ", num);
			num++;
		}
		for (int j = 0; j < i+1; j++){
			printf("%c ", ch);
			ch++;
		}
		putchar('\n');
	}
}
