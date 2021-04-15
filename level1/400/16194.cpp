// 16194 silver 1

#include<iostream>
using namespace std;

int d[1001];
int a[10001];
int main() {
	int n;
	cin >> n;
	d[0] = 0;

	for (int i = 1; i <= n; i++) {
		d[i] = -1;
		cin >> a[i];
		for (int j = 1; j <= i; j++) {
			if (d[i] == -1)
				d[i] = min(d[i], d[i - j] + a[j]);
		}
	}
	cout << d[n];
	return 0;
}