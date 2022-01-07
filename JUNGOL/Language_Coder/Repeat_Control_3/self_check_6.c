//self_check_6
#include<stdio.h>
int main(void){
	int ch = 'A';
	int n;
	scanf("%d", &n);
	for(int i = n; i > 0; i--){
		for (int j = 0; j < i; j++){
			printf("%c", ch);
			ch++;
		}
		putchar('\n');
	}
}
