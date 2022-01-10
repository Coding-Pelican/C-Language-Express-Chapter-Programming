//get_integer_and_add
#include<stdio.h>
int add(int _x, int _y){
	return _x + _y;
}

int get_integer(){
	int value;
	printf(">>");
	scanf("%d", &value);
	return value;
}

int main(void){
	int x = get_integer();
	int y = get_integer();
	printf("%d", add(x, y));
}
