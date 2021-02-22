// 17413 silver 3

#include <iostream>
#include <stack>
#include <string>
using namespace std;
void print(stack<char> &s) {
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}
int main() {
	string input;
	stack<char> s;
	bool flag = false;
	getline(cin, input);
	for (char ch : input) {
		if (ch == '<') {
			print(s);
			flag = true;
			cout << ch;
		}
		else if (ch == '>') {
			flag = false;
			cout << ch;
		}
		else if (flag) {
			cout << ch;
		}
		else {
			if (ch == ' ') {
				print(s);
				cout << ch;
			}
			else {
				s.push(ch);
			}
		}
	}
	print(s);
	cout << '\n';
	return 0;
}