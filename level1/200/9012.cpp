#include<iostream>
#include<string>

using namespace std;
string valid(string v) {
	int cnt = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == '(') {
			cnt++;
		}
		else if (v[i] == ')') {
			cnt--;
		}
		if (cnt < 0) {
			return "NO";
		}
	}
	if (cnt == 0) {
		return "YES";
	}
	else {
		return "NO";
	}
}
int main() {
	int num;
	cin >> num;
	while (num--) {
		string pa;
		cin >> pa;
		cout << valid(pa) << '\n';
	}
	return 0;
}