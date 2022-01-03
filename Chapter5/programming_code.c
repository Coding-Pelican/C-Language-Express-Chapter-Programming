#include<stdio.h>
#include<math.h>
#define PI 3.14159
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
