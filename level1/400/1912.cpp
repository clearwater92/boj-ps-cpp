// 1912 silver 2

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int a[100001];
int d[100001];

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		d[i] = a[i];
		if (d[i] < d[i - 1] + a[i]) {
			d[i] = d[i - 1] + a[i];
		}
	}
	int result = d[1];
	for (int i = 2; i <= n; i++) {
		if (d[i] > result)
			result = d[i];
	}
	cout << result;
	return 0;
}