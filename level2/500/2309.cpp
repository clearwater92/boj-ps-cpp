// 2309 bronze 1

#include<iostream>
#include<algorithm>
using namespace std;

#define hobit 9

int getSum(const int* arr) {
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		sum += arr[i];
	}
	return sum;
}

int isSum100(int* arr) {
	int sum = getSum(arr);
	for (int i = 0; i < hobit-1; i++) {
		for (int j = i + 1; j < hobit; j++) {
			if (sum - (arr[i] + arr[j]) == 100) {
				arr[i] = -1;
				arr[j] = -1;
				return 0;
			}
		}
	}
	return -1;
}

int main() {
	int arr[hobit];
	for (int i = 0; i < hobit; i++) {
		cin >> arr[i];
	}

	isSum100(arr);
	sort(arr, arr + hobit);

	for (int i = 2; i < hobit; i++) {
		cout << arr[i] << '\n';
	}

	return 0;
}