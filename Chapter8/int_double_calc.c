//int_double_calc
#include <stdio.h>
#define TRUE 1
#define FALSE 0

double add(double _x, double _y);
double sub(double _x, double _y);
double mul(double _x, double _y);
double div(double _x, double _y);
int get_integer();
double get_double();
void disp_calc_menu();
void disp_menu();
char select_menu();
int is_exit_keyword(char _selected_calc);
int main(void){
	int selected_calc = 0;
	char selected_op;
	int i_x, i_y;
	double lf_x, lf_y;
	while(TRUE){
		disp_calc_menu();
		selected_calc = select_menu();
		switch(selected_calc){
			case 'i':
			case 'I':
				selected_calc = 1;
				i_x = get_integer();
				i_y = get_integer();
				break;
			case 'd':
			case 'D':
				selected_calc = 2;
				lf_x = get_double();
				lf_y = get_double();
				break;
			case 'q':
			case 'Q':
				selected_calc = -1;
				break;
			default:
				selected_calc = 0;
				puts("Error");
				break;
		}
		if (is_exit_keyword(selected_calc) || selected_calc == -1){
			break;
		} else if (!selected_calc == 0){
			disp_menu();
			selected_op = select_menu();
			switch(selected_op){
				case '+':
					selected_calc == 1 ? printf("%d\n", (int)add((double)i_x, (double)i_y)) : printf("%lf\n", add(lf_x, lf_y));
					break;
				case '-':
					selected_calc == 1 ? printf("%d\n", (int)sub((double)i_x, (double)i_y)) : printf("%lf\n", sub(lf_x, lf_y));
					break;
				case '*':
					selected_calc == 1 ? printf("%d\n", (int)mul((double)i_x, (double)i_y)) : printf("%lf\n", mul(lf_x, lf_y));
					break;
				case '/':
					selected_calc == 1 ? printf("%d\n", (int)div((double)i_x, (double)i_y)) : printf("%lf\n", div(lf_x, lf_y));
					break;
				default:
					break;
			}
		} else{
			continue;
		}
		
	}
}

void disp_calc_menu(){
	puts("'i' 정수 계산기");
	puts("'d' 실수 게산기");
	puts("'q' 종료");
}

void disp_menu(){
	puts("'+' 덧셈'");
	puts("'-' 뺄셈");
	puts("'*' 곱셈");
	puts("'/' 나눗셈");
}

char select_menu(){
	char choice;
	printf(">> ");
	scanf(" %c", &choice);
	return choice;
}

int is_exit_keyword(char _selected_calc){
	return _selected_calc == 'q' || _selected_calc == 'Q' ? TRUE : FALSE;
}

int get_integer(){
	int n;
	printf(">> ");
	scanf("%d", &n);
	return n;
}

double get_double(){
	double n;
	printf(">> ");
	scanf("%lf", &n);
	return n;
}

double add(double _x, double _y){
	return _x + _y;
}

double sub(double _x, double _y){
	return _x - _y;
}

double mul(double _x, double _y){
	return _x * _y;
}

double div(double _x, double _y){
	return _x / _y;
}
