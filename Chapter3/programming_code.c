#include <stdio.h>
#define METER(X) (1609 * X)
#define C(F) (5.0 / 9.0) * (F - 32.0)
#define POW(X) (X * X)
//01
/*
int main(void){
	float a[3] = {0,};
	float sum = 0, avg = 0;
	for(int i = 0; i < 3; i++){
		scanf("%f", &a[i]);	//1 2 3
		sum += a[i];
		
	}
	avg = sum / 3;
	printf("sum : %f\navg : %f", sum, avg);
}
*/
//02
/*
int main(void){
	float mile, meter;
	scanf("%f", &mile);	//2
	printf("%f", METER(mile));
}
*/
//03
/*
int main(void){
	float a, h;//밑변 높이 
	printf("a h : ");
	scanf("%f %f", &a, &h);	//5 3
	printf("%f", 0.5*a*h); 
}
*/
//04
/*
int main(void){
	float f;
	scanf("%f", &f);	//100
	printf("%f", C(f));
}
*/
//05
/*
int main(void){
	float x;
	scanf("%f", &x);	//2
	printf("%f", 3 * POW(x) + 7 * x + 11);
}
*/
//06
/*
int main(void){
	float weight;
	scanf("%f", &weight);	//80
	printf("%.1fkg", weight * 0.17);
}
*/
