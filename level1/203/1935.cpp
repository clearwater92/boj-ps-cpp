// 1935 silver 3

#include<iostream>
#include<iomanip>
#include<stack>
#include<string>
using namespace std;
int operand[26];
int main() {
	int n;
	cin >> n;
	stack<double> st;
	string exp;
	cin >> exp;
	for (int i = 0; i < n; i++) {
		cin >> operand[i];
	}
	
	for (char ch : exp) {
		if (ch >= 'A' && ch <= 'Z') {
			st.push((double)operand[ch - 'A']);
		}
		else {
			double op2 = st.top();
			st.pop();
			double op1 = st.top();
			st.pop();
			if (ch == '+') {
				st.push(op1 + op2);
			}
			else if (ch == '-') {
				st.push(op1 - op2);
			}
			else if (ch == '*') {
				st.push(op1 * op2);
			}
			else if (ch == '/') {
				st.push(op1 / op2);
			}
		}
	}
	cout << fixed << setprecision(2) << st.top() << '\n';
	return 0;
}