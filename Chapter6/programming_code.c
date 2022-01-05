#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define POW(X) ((X)*(X))

//01
/*
int main(void){
	char ch = getchar();	//자음 or 모음  
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
		puts("모음");
	} else{
		puts("자음");
	}
}
*/
//02
/*
int main(void){
	int x, y;
	scanf("%d %d", &x, &y);	//정수 2개 
	x % y == 0 ? puts("y는 x의 약수") : puts("y는 x의 약수가 아님");
} 
*/
//03
/*
int main(void){
	int x, y, z, min;
	scanf("%d %d %d", &x, &y, &z);
	min = x;
	if (min > y){
		min = y;
		if(min > z)
		{
			min = z;
		}
	} else if (min > z){
		min = z;
	}
	printf("%d", min);
} 
*/
//04 가위 바위 보
/*
int main(void){
	int user, com;
	srand((unsigned)time(NULL));
	
	printf("가위:1 바위:2 보:3\n>> ");
	scanf("%d", &user);
	com = rand()%3+1;
	printf("User : %d | Com : %d\n", user, com);
	
	if(user == com){
		puts("Draw");
	} else {
		if((user + 1) % 3 == com){
			puts("Loss");
		} else{
			puts("Win");
		}
	}
}
*/
//05
/*
int main(void){
	int height, age;
	printf("Height Age : ");
	scanf("%d %d", &height, &age);
	
	if(height >= 140 && age >= 10){
		puts("You can ride");
	}else{
		puts("Sorry");
	} 
} 
*/
//06
/*
int main(void){
	int month;
	scanf("%d", &month);
	switch(month){
		case 1:
			puts("Jan");
			break;
		case 2:
			puts("Feb");
			break;
		case 3:
			puts("Mar");
			break;
		case 4:
			puts("Apl");
			break;
		case 5:
			puts("May");
			break;
		case 6:
			puts("Jun");
			break;
		case 7:
			puts("Jul");
			break;
		case 8:
			puts("Agu");
			break;
		case 9:
			puts("Sep");
			break;
		case 10:
			puts("Oct");
			break;
		case 11:
			puts("Nov");
			break;
		case 12:
			puts("Dec");
			break;
		default:
			puts("Error");
			break;
	}
}
*/
//07
/*
int main(void){
	int height, weight;
	float std_wright;
	scanf("%d %d", &height, &weight);
	std_wright = ((float)height - 100) * 0.9;
	if(weight > std_wright){
		puts("과체중"); 
	} else if(weight < std_wright){
		puts("저체중"); 
	} else {
		puts("표준"); 
	}
}
*/
//08
/*
int main(void){
	int time, age, cost;
	printf("시간 나이 : ");
	scanf("%d %d", &time, & age);
	if(time < 17){
		if(age <= 12 || age >= 65){
			cost = 25000;
		}else{
			cost = 34000;
		}
	}else{
		cost = 10000;
	}
	printf("%d\n", cost);
} 
*/
//09
/*
int main(void){
	float x;
	printf("f(x), x = ");
	scanf("%f", &x);
	if(x<=0){
		printf("%f", POW(x) - 9*x + 2);
	}else{
		printf("%f", 7*x + 2);
	}
}
*/
//10
/*
int main(void){
	int x, y;
	scanf("%d %d", &x, &y);
	if (x > 0 && y > 0){
		putchar('1'); 
	} else if(x < 0 && y > 0){
		putchar('2'); 
	} else if(x > 0 && y > 0){
		putchar('3'); 
	} else{
		putchar('4'); 
	}
}
*/
//11
/*
int main(void){
	char ch = getchar();
	switch(ch){
		case 'c':
		case 'C':
			puts("Circle");
			break;
		case 'r':
		case 'R':
			puts("Rectangle");
			break;
		case 't':
		case 'T':
			puts("Triangle");
			break;
		default:
			puts("Unknown");
			break;
	}
}
*/
