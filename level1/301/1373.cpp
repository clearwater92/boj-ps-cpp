// 1373 bronze 2

#include <iostream>
#include <string>
using namespace std;
int main() {
	string bin;
	cin >> bin;
	int n = bin.size();
	if (n % 3 == 1) {
		cout << bin[0];
	}
	else if (n % 3 == 2) {
		cout << 2* (bin[0]-'0') + (bin[1] - '0');
	}
	for (int i = n%3; i < n; i+=3) {
		cout << (bin[i] - '0') * 4 + (bin[i + 1] - '0') * 2 + (bin[i + 2] - '0');
	}
	cout << '\n';
	return 0;
}