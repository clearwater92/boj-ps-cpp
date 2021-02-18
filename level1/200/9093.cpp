// 9093 bronze 1

#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	cin.ignore();
	while (n--) {
		string word;
		getline(cin, word);
		word += '\n';
		stack<char> s;
		for (char ch : word) {
			if (ch == ' ' || ch == '\n') {
				while (!s.empty()) {
					cout << s.top();
					s.pop();
				}
				cout << ch;
			}
			else {
				s.push(ch);
			}
		}
	}
	return 0;
}