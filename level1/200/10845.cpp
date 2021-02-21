// 10845 silver 4

#include<iostream>
#include<string>
using namespace std;
struct Queue {
	int data[10000];
	int begin, end;
	Queue() {
		begin = 0;
		end = 0;
	}
	void push(int num) {
		data[end] = num;
		end += 1;
	}
	bool empty() {
		if (begin == end) {
			return true;
		}
		else {
			return false;
		}
	}
	int pop() {
		if (empty()) {
			return -1;
		}
		begin += 1;
		return data[begin - 1];
	}
	int front() {
		return data[begin];
	}
	int back() {
		return data[end - 1];
	}
	int size() {
		return end - begin;
	}
};
int main() {
	int n;
	cin >> n;

	Queue q;
	while (n--) {
		string input;
		cin >> input;
		if (input == "push") {
			int num;
			cin >> num;
			q.push(num);
		}
		else if (input == "pop") {
			cout << q.pop() << '\n';
		}
		else if (input == "size") {
			cout << q.size() << '\n';
		}
		else if (input == "empty") {
			cout << (q.empty() ? 1 : 0) << '\n';
		}
		else if (input == "front") {
			cout << q.front() << '\n';
		}
		else if (input == "back") {
			cout << q.back() << '\n';
		}
	}
	return 0;
}