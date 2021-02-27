// 1978 silver 4

#include <iostream>
using namespace std;
bool prime(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i < n - 1; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int n;
	int result = 0;
	cin >> n;
	while (n--) {
		int num;
		cin >> num;
		if (prime(num)) {
			result += 1;
		}
	}
	cout << result;
	return 0;
}