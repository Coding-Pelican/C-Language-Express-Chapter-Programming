#include<stdio.h>
#include<math.h>
#define PI 3.14159
//01
/*
int main(void){
	int a, b;
	scanf("%d %d", &a, &b);	//10 3
	printf("%d %d", a/b, a%b);
}
*/
//02
/*
int main(void){
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%lf %lf %lf %lf", a + b, a - b, a * b, a / b);
}
*/
//03
/*
int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", a > b ? (a > c ? a : c) : (b > c ? b : c));
}
*/
//04
/*
int main(void) {
	double cm, inch, feet;
	scanf("%lf", &cm);	//163
	inch = cm / 2.54;
	feet = inch / 12;
	printf("%d피트 %lf인치\n", (int)feet, (feet - (int)feet) * 12);
}
*/
//05
/*
int main(void) {
	int n;
	scanf("%d", &n);
	printf("십의 자리 %d\n", n / 10);
	printf("일의 자리 %d\n", n % 10);
}
*/
//06
/*
int main(void) {
	int n;
	scanf("%d", &n);
	n = ~n + 1;
	printf("%d\n", n);
}
*/
//07
/*
int main(void) {
	int k, n;
	scanf("%d", &k);
	scanf("%d", &n);
	printf("%d\n", k << n);
}
*/
//08
/*
int main(void) {
	double r;
	scanf("%lf", &r);
	printf("S = %lf\n", 4 * PI * pow(r, 2));
	printf("V = %lf\n", (4.0 / 3.0) * PI * pow(r, 3));
}
*/
//09
/*
int main(void) {
	float bc, ac, ae;
	printf("BC : ");
	scanf("%f", &bc);//100
	printf("AC : ");
	scanf("%f", &ac);//20
	printf("AE : ");
	scanf("%f", &ae);//1000
	printf("DE = %f", ae * bc / ac);//AC:AE=BC:DE, AE*BC = AC*DE ∴DE = AE*BC/AC
}
*/
//10
/*
int main(void){
	int x, y;
	printf("X : ");
	scanf("%d", &x);
	printf("Y : ");
	scanf("%d", &y);
	printf("%d 사분면", (x>0 && y>0)? 1 : (x<0 && y>0)? 2 : (x<0 && y<0)? 3 : 4);	//이걸 더 간단하게 줄일 수 있는 방법이 뭘까요?? 
}
*/
//11
/*
int main(void){
	float l, rad;
	printf("l angle : ");
	scanf("%f %f", &l, &rad); //900, 7.2
	rad *= PI / 180.0;
	printf("r = %f", l / rad);	//l = r * rad (rad = angle * (PI / 180.0))
}
*/
//12
/*
int main(void){
	unsigned int bit_char = 0;
	int bit_position = 0;
	char ch;
	for(int i = 0; i < 4; i++){
		scanf(" %c", &ch);
		bit_char = ch << bit_position | bit_char;
		bit_position += 8;
		printf("%x\n", bit_char);
	}
	printf("%x\n", bit_char);
}
*/
