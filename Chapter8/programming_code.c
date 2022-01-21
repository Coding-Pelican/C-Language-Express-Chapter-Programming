#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define PI 3.141592
#define TRUE 1
#define FALSE 0

//01
/*
double add(double _x, double _y);
double sub(double _x, double _y);
double mul(double _x, double _y);
double div(double _x, double _y);
double check_operator(double x, char op, double y);
void enter_operation();
void display_input_message();
void display_count_of_enter_operator_calls();
static int n_add = 0, n_sub = 0, n_mul = 0, n_div = 0;
int main(void){
	while(TRUE){
		display_input_message();
		enter_operation();
		display_count_of_enter_operator_calls();
	}
}
void display_count_of_enter_operator_calls(){
	if(n_add > 0){
		printf("덧셈 %d\n", n_add);
	}
	if(n_sub > 0){
		printf("뺄셈 %d\n", n_sub);
	}
	if(n_mul > 0){
		printf("곱셈 %d\n", n_mul);
	}
	if(n_div > 0){
		printf("나눗셈 %d\n", n_div);
	}
}
void display_input_message(){
	printf("연산을 입력하시오.\n>> ");
}
void enter_operation(){
	double x, y;
	char op;
	scanf("%lf%c%lf", &x, &op, &y);
	printf("%d\n", (int)(check_operator(x, op, y)));
}
double check_operator(double x, char op, double y){
	if(op == '+'){
		return add(x, y);	
	} else if(op == '-'){
		return sub(x, y);	
	} else if(op == '*'){
		return mul(x, y);	
	} else if(op == '/'){
		return div(x, y);	
	} else{
		return NULL;
	}
}
double div(double _x, double _y){
	n_div++;
	return _x / _y;
}
double mul(double _x, double _y){
	n_mul++;
	return _x * _y;
}
double sub(double _x, double _y){
	n_sub++;
	return _x - _y;
}
double add(double _x, double _y){
	n_add++;
	return _x + _y;
}
*/
//02
/*
void count_dice_face(int face);
int get_dice_face();
int max_cnt;
int main(void){
	srand((unsigned)time(NULL));
	max_cnt = 10;
	for (int i = 0; i < max_cnt; i++){
		count_dice_face(get_dice_face());
	}
}
int get_dice_face(){
	return rand() % 6 + 1;
}
void count_dice_face(int face){
	static int face_cnt[6] = {0, };
	static int cnt = 0;
	cnt++;
	face_cnt[face - 1]++;
	printf("%d회 시행\n", cnt);
	if(cnt == max_cnt){
		cnt = 0;
		for(int i = 0; i < 6; i++){
			printf("%d -> %d\n", i + 1, face_cnt[i]);
			face_cnt[i] = 0;
		}
	}
}
*/
//03
/*
int check(int value_of_input);
int input_password();
const int max_number_of_verify = 3;
const int password = 1234;
int main(void){
	while(TRUE){
		if(check(input_password()) == FALSE){
			continue;
		} else{
			break;
		}
	}
}
int input_password(){
	static int value_of_input = 1000; //int value_of_input;
	printf("Password : ");
	printf("%d\n", value_of_input++); //scanf("%d", &value_of_input);
	return value_of_input;
}
int check(int value_of_input){
	static int number_of_verify = 0;
	number_of_verify++;
	if(number_of_verify < max_number_of_verify){
		return value_of_input == password ? TRUE : FALSE;
	} else{
		puts("Login Attempts Exceeded");
		return TRUE;
	}
}
*/
//04
/*
void get_random();
int main(void){
	get_random();
	get_random();
	get_random();
	get_random();
}
void get_random(){
	static int isInited = FALSE;
	if(isInited == FALSE){
		isInited = TRUE;
		srand((unsigned)time(NULL));
		puts("Procced initialization");
	} else{
		printf("%d\n", rand());
	}  
}
*/
//05
/*
int sum(int n);
int get_integer();
int main(void){
	printf("%d\n", sum(get_integer()));
}
int get_integer(){
	int n;
	printf("Enter an Integer : ");
	printf("%d\n", n = 10); //scanf("%d", &n);
	return n;
}
int sum(int n){
	return n == 1 ? 1 : n + sum(n - 1);
}
*/
//06
/*
int power(int base, int power_raised);
int get_integer(int value);
int main(void){
	int base, exponent;
	printf("Enter an base : ");
	base = get_integer(2);
	printf("Enter an exponent : ");
	exponent = get_integer(10);
	printf("%d\n", power(base, exponent));
}
int get_integer(int value){ //parameter is void
	int n;
	printf("%d\n", n = value); //scanf("%d", &n);
	return n;
}
int power(int base, int power_raised){
	return power_raised == 1 ? base : base * power(base, power_raised - 1);
}
*/
