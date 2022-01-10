//func_max
#include<stdio.h>
int max(int _x, int _y){
	return _x > _y ? _x : _y;
}

int main(void){
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d", max(x, y));
}
