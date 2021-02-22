// 10808 bronze 2
#include<iostream>
#include<string>
using namespace std;
int main() {
	string word;
	int al[26] = { 0 };
	cin >> word;
	for (char ch : word) {
		al[ch - 'a']++;
	}
	for (int i = 0; i < word.size(); i++) {
		cout << al[i] << ' ';
	}

	return 0;

}