#include <bits/stdc++.h>
using namespace std;
int n;
int* arr;
void search(int depth) {
	if (depth > n) {
		for (int i = 1; i < n + 1; i++) {
			cout << arr[i];
		}
		cout << "\n";
	} else {
		for (int i = arr[depth - 1]; i < 7; i++) {
			arr[depth] = i;
			search(depth + 1);
		}
	}
}
int main(void) {
	cin >> n;
	arr = (int*)calloc(sizeof(int), n);
	arr[0] = 1;
	search(1);
	free(arr);
}
