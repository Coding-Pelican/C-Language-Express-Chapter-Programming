#include <bits/stdc++.h>
int main(void) {
	char s1[] = "100";
	char s2[] = "12.93";
	char buffer[100];
	int i = atoi(s1);
	double d = atof(s2);
	double result = i + d;
	sprintf(buffer, "%f", result);
	printf("result = %s\n", buffer);
}
