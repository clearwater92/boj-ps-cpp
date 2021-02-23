// 1934 silver 5

#include <iostream>
using namespace std;
int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	else {
		return gcd(y, x % y);
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		cout << (a * b) / gcd(a, b) << '\n';
	}
	return 0;
}