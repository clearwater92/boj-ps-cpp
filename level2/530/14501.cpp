// 14501 silver 4
#include<iostream>
using namespace std;
int t[16];
int p[16];
int n;
int ans = 0;
void go(int day, int sum) {
	if (day == (n + 1)) {
		if (ans < sum)
			ans = sum;
		return;
	}
	if (day > (n + 1))
		return;
	go(day + 1, sum);
	go(day + t[day], sum + p[day]);
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> t[i] >> p[i];
	}
	go(1, 0);
	cout << ans << '\n';
	return 0;
}