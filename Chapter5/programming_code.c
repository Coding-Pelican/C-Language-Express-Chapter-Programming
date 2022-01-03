#include<stdio.h>
//03
/*
int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", a > b ? (a > c ? a : c) : (b > c ? b : c));
}
*/
//04
/*
int main(void) {
	double cm, inch, feet;
	scanf("%lf", &cm);	//163
	inch = cm / 2.54;
	feet = inch / 12;
	printf("%d피트 %lf인치", (int)feet, (feet - (int)feet) * 12);
}
