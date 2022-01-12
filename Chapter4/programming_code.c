#include <stdio.h>
#define SQARE_M(X) (X * 3.3058)
#define POW(X) (X * X)
//01
/*
int main(void){
	float x;
	scanf("%f", &x);	//123.456
	printf("%f\n", x);
	printf("%e", x);
}
*/
//02
/*
int main(void){
	int x;
	scanf("%x", &x);	//ff
	printf("%d\n", x);
	printf("%o", x);
}
*/
//03
/*
int main(void){
	int x, y, temp;
	scanf("%d %d", &x, &y);
	temp = x;
	x = y;
	y = temp;
	printf("%d %d", x, y);
}
*/
//04
/*
int main(void){
	float w, l, h;	//가로, 세로, 높이 
	scanf("%f %f %f", &w, &l, &h);	//30, 30, 30
	printf("%f", w * l * h);
}
*/
//05
/*
int main(void){
	float pyeong;
	scanf("%f", &pyeong);
	printf("%f", SQARE_M(pyeong));
}
*/
//06
/*
int main(void){
	const float term1 = 3.32e-3;
	const float term2 = 9.76e-8;
	printf("%f", term1 + term2);
}
*/
//07
/*
int main(void){
	float m, v;
	printf("m v : ");
	scanf("%f %f", &m, &v);
	printf("%f", m * POW(v) * 0.5);
}
*/
//08
/*
int main(void){
	char ch;
	scanf("%d", &ch);
	printf("%c", ch); 
}
*/
//09
/*
int main(void){
	char ch = 'a';
	printf("%c %c %c", ch+1, ch+2, ch+3);
}
*/
//10
/*
int main(void){
	putchar('\a');
	puts("화재가 발생했습니다.");
}
*/
//11
/*
int main(void){
	printf("\"ASCII code\", 'A', 'B', 'C'\n\\t \\a \\n");
} 
*/
