#include <bits/stdc++.h>
using namespace std;
int n;
int sequence(int n) {
	if(n < 3) {
		return n == 2 ? 2 : 1;
	} else {
		return (sequence(n - 2) * sequence(n - 1)) % 100;
	}
}
int main(void) {
	cin >> n;
	cout << sequence(n);
}
