// 1874 silver 3

#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	stack<int> s;
	int n;
	string result;
	cin >> n;

	int m = 0;
	while (n--) {
		int x;
		cin >> x;
		if (x > m) {
			while (x > m) {
				s.push(++m);
				result += '+';
			}
			s.pop();
			result += '-';
		}
		else {
			bool found = false;
			if (!s.empty()) {
				int top = s.top();
				s.pop();
				result += '-';
				if (x == top) {
					found = true;
				}
			}
			if (!found) {
				cout << "NO" << '\n';
				return 0;
			}
		}
	}
	for (auto x : result) {
		cout << x << '\n';
	}
	return 0;
}