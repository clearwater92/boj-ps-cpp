// 10799 silver 3
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	string pa;
	cin >> pa;
	int result = 0;
	stack<int> st;
	for (int i = 0; i < pa.size(); i++) {
		if (pa[i] == '(') {
			st.push(i);
		}
		else {
			if (st.top() + 1 == i) {
				st.pop();
				result += st.size();
			}
			else {
				st.pop();
				result += 1;
			}
		}
	}
	cout << result;
	return 0;
}