// 1212 bronze 4

#include <iostream>
#include <string>
using namespace std;
string eight[8] = { "000","001","010","011","100","101","110","111" };
int main() {
	string bin;
	cin >> bin;
	bool start = true;
	if (bin.length() == 1 && bin[0] - '0' == 0) {
		cout << "0";
	}
	for (int i = 0; i < bin.length(); i++) {
		int n = bin[i] - '0';
		if (start == true && n < 4) {
			if (n == 0) {
				continue;
			}
			else if (n == 1) {
				cout << "1";
			}
			else if (n == 2) {
				cout << "10";
			}
			else if (n == 3) {
				cout << "11";
			}
			start = false;
		}
		else {
			cout << eight[n];
			start = false;
		}
	}
	return 0;
}