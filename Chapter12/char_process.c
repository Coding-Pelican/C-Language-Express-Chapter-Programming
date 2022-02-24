#include <bits/stdc++.h>
int main(void) {
	int c;
	while ((c = getchar()) != EOF) {
		if (islower(c)) {
			c = toupper(c);
		}
		putchar(c);
	}
}
