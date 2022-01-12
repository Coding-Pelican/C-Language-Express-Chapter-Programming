#include <stdio.h>
#define PI 3.141592
//01
/*
double get_double();
double square(double n);
int main(void){
	double x = get_double();
	printf("%lf", square(x));
}
double square(double n){
	return n * n;
}
double get_double(){
	double n;
	printf(">> ");
	scanf("%lf", &n);
	return n;
}
*/
//02
/*
int check_alphabet(int ch);
int main(void){
	char sample = getchar();
	printf("%c ", sample);
	check_alphabet((int)sample) ? puts("is alphabet.") : puts("is not alphabet.");
}
int check_alphabet(int ch){
	return ch >= 65 && ch <= 122 ? 1 : 0;
}
*/
//03
/*
double get_double();
double cal_area(double radius);
int main(void){
	printf("%lf", cal_area(get_double()));
}
double cal_area(double radius){
	return PI * radius * radius;
}
double get_double(){
	double n;
	printf(">> ");
	scanf("%lf", &n);
	return n;
}
*/
//04
/*
int get_integer();
int is_leap(int year);
int main(void){
	printf("%d", 365 + is_leap(get_integer()));
}
int is_leap(int year){
	return (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0) ? 1 : 0;
}
int get_integer(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	return n;
}
*/
