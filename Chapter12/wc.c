#include <bits/stdc++.h>
int countWord(char *s) {
	int i, wc = 0, waiting = 1;
	for (i = 0; s[i] != NULL; ++i) {
		if (isalpha(s[i])) {
			if (waiting) {
				wc++;
				waiting = 0;
			}
		} else {
			waiting = 1;
		}
	}
	return wc;
}
int main(void) {
	int wc = countWord("the c book...");
	printf("단어의 개수: %d \n", wc);
}
