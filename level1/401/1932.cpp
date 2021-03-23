// 1932 silver 1

#include <iostream>
#include <algorithm>
using namespace std;
int a[501][501];
int d[501][501];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			d[i][j] = max({ d[i - 1][j], d[i - 1][j - 1] }) + a[i][j];
		}
	}
	int result = *d[n];
	for (int i = 0; i <= n; i++) {
		if (result < d[n][i]) {
			result = d[n][i];
		}
	}
	cout << result << '\n';

	return 0;
}