#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define PI 3.141592
#define TRUE 1
#define FALSE 0
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
//05
/*
double get_double();
double round(double n);
int main(void){
	printf("%lf", round(get_double()));
}
double round(double n){
	return (int)(n + 0.5);
}
double get_double(){
	double n;
	printf(">> ");
	scanf("%lf", &n);
	return n;
}
*/
//06
/*
int get_integer();
int sign(int n);
int abs(int n);
int even(int n);
int main(void){
	int n =  get_integer();
	even(n) == 1 ? puts("짝수") : puts("홀수");
	printf("%d\n", abs(n));
	sign(n) == 1 ? puts("양수") : sign(n) == -1 ? puts("음수") : puts("0");
}
int even(int n){
	return n % 2 == 0 ? 1 : 0; 
}
int abs(int n){
	return n < 0 ? n * -1 : n;
}
int sign(int n){
	return n > 0 ? 1 : n < 0 ? -1 : 0; 
}
int get_integer(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	return n;
}
*/
//07
/*
int get_integer();
int get_tax(int income);
int main(void){
	printf("%d", get_tax(get_integer()));
}
int get_tax(int income){
	return income <= 1000 ? income * 0.08 : (income - 1000) * 0.1 + 80;
}
int get_integer(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	return n;
}
*/
//08
/*
double get_double();
double sin_degree(double degree);
int main(void){
	for (int i = 0; i < 19; i++){
		printf("%lf\n", sin((i * PI) / 18.0));
	}
	printf("%lf\n", sin_degree(get_double()));
}
double sin_degree(double degree){
	return sin((degree * PI) / 180.0);
}
double get_double(){
	double n;
	printf(">> ");
	scanf("%lf", &n);
	return n;
}
*/
//09
/*
int get_integer();
void b_rand(int n);
int main(void){
	srand((unsigned)time(NULL));
	b_rand(get_integer());
}
void b_rand(int n){
	for (int i = 0; i < n; i++){
		printf("%d ", rand() % 2);
	}
} 
int get_integer(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	return n;
}
*/
/*
//10
int get_integer();
char get_char();
int b_rand();
void init_rand();
void display_selection();
int is_selection_correct(int selection, int state);
void print_validation_message(int state);
void print_proceed_confirmation_message();
int is_continue(char state);
int main(void){
	int choice, coin; 
	char choice_proceed;
	init_rand(); 
	while(TRUE){
		display_selection();
		choice = get_integer();
		coin = b_rand();
		print_validation_message(is_selection_correct(choice, coin));
		print_proceed_confirmation_message();
		choice_proceed = get_char();
		if (is_continue(choice_proceed) == TRUE){
			continue;	
		} else{
			break;
		}
	}
}
int is_continue(char state){
	state == 'y' || state == 'Y' ? 1 : 0;
}
void print_proceed_confirmation_message(){
	puts("계속하시겠습니까? (y/n)");
}
void print_validation_message(int state){
	state == 1 ? puts("맞았습니다") : puts("틀렸습니다"); 
}
int is_selection_correct(int selection, int state){
	return selection == state ? 1 : 0;
}
void display_selection(){
	puts("앞면(1) or 뒷면(0)");
}
void init_rand(){
	srand((unsigned)time(NULL));
}
int b_rand(){
	return rand() % 2;
}
char get_char(){
	char ch;
	printf(">> ");
	scanf(" %c", &ch);
	return ch;
}
int get_integer(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	return n;
}
*/
//11
/*
double f_rand();
int main(void){
	printf("%lf ", f_rand());
	printf("%lf ", f_rand());
	printf("%lf ", f_rand());
	printf("%lf ", f_rand());
	printf("%lf ", f_rand());
}
double f_rand(){
	return rand()/(double)RAND_MAX;
}
*/
//12
/*
int get_integer();
void print_value(int n);
void display_input_message();
int main(void){
	int n;
	do{
		display_input_message();
		n = get_integer();
		print_value(n);
	} while(n > -1);
}
void display_input_message(){
	puts("값을 입력하시오(종료 -1)");
}
void print_value(int n){
	for(int i = 0; i < n; i++){
		printf("*");
	}
	putchar('\n');
}
int get_integer(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	return n;
}
*/
//13
/*
int get_integer();
int is_mutiple(int n, int m);
int main(void){
	int n, m;
	n = get_integer();
	m = get_integer();
	printf("%d is ", n);
	is_mutiple(n, m) == 1 ? printf("a multiple of %d.", m) : printf("not a multiple of %d.", m);
}
int is_mutiple(int n, int m){
	return n % m == 0 ? 1 : 0;
}
int get_integer(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	return n;
}
*/
