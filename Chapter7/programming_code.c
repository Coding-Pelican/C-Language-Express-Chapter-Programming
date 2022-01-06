#include<stdio.h>
//01
/*
int main(void){
	int cnt;
	scanf("%d", &cnt);
	for(int i = 0; i < cnt; i++){
		printf("%d ", cnt - i);
	}
	putchar('\a');
}
*/
//02
/*
int main(void){
	int result = 0;
	//int a = 3, d = 3, n;
	//n = 33;
	//result = (n*(2*a+(n-1)*d)/2);
	for (int i = 0; i < 100; i++){
		result += (i + 1) % 3 == 0 ? i + 1 : NULL;
	}
	printf("%d", result);
}
*/
//03
/*
int main(void){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		n % (i + 1) == 0 ? printf("%d ", i + 1) : NULL;
	}
}
*/
//04
/*
int main(void){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - (i + 1); j++){
			printf(" ");
		}
		for (int j = 0; j < i + 1; j++){
			printf("*");
		}
		putchar('\n');
	}
}
*/
//05
/*
int main(void){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < i + 1; j++){
			printf("%d ", j + 1);
		}
		putchar('\n');
	}
}
*/
//06
/*
int main(void){
	char op;
	int x, y;
	do{
		puts("*****************");
		puts("A---- Add");
		puts("S---- Subtract");
		puts("M---- Multiply");
		puts("D---- Divide");
		puts("Q---- Quit");
		puts("*****************");
		printf("연산자 선택:");
		scanf(" %c", &op);
		
		if(op == 'q' || op == 'Q'){
			break;
		} else{
			printf("x y : ");
			scanf("%d %d", &x, &y);
			
			if(op == 'a' || op == 'A'){
				printf("%d\n", x + y);
			} else if(op == 's' || op == 'S'){
				printf("%d\n", x - y);
			} else if(op == 'm' || op == 'M'){
				printf("%d\n", x * y);
			} else if(op == 'd' || op == 'D'){
				printf("%d\n", x / y);
			} else{
				puts("Error"); 
			}
		}
	}while(true);
}
*/
//07
/*
int main(void){
	int is_prime;
	for (int i = 1; i < 100; i++){
		is_prime = 1;
		for (int j = 2; j < i + 1; j++){
			if((i+1) % j == 0){
				is_prime = 0;
				break;
			}
		}
		if(is_prime){
			printf("%d ", i + 1);
		}
	}
}
*/
//08
/*
int main(void){
	int n;
	do{
		printf("막대의 높이(종료: -1): ");
		scanf("%d", &n);
		for(int i = 0; i < n; i++){
			printf("*");
		}
		putchar('\n');
	}while(!(n == -1));
}
*/
//09
/*
int main(void){
	int result;
	for (int i = 0; ((i + 1) * (i + 2)) / 2 < 10000; i++){
		result = i + 1;
	}
	printf("s{%d} = %d\n", result, (result * (result + 1)) / 2);
}
*/
//10
/*
int main(void){
	float a, r = 1;
	int n;
	scanf("%f %d", &a, &n);
	for (int i = 0; i < n; i++){
		r *= a;
	}
	printf("%f\n", r);
}
*/
//11
/*
int main(void){
	int n, k_squared;
	scanf("%d", &n);
	k_squared = (n * (n + 1) * (2 * n + 1)) / 6;
	printf("%d\n", k_squared);
}
*/
//12
/*
int main(void){
	int a = 0, b = 1, c = 0, n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("%d ", c);
		c = a + b;
		a = b;
		b = c;
	}
}
*/
//13
/*
int main(void){
	int n, r, result = 1;
	scanf("%d %d", &n, &r);
	for (int i = n; i > n - r; i--){
		result *= i;
	}
	printf("%d\n", result);
}
*/
