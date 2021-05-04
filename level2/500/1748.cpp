//// 1748 silver 3
//
//#include<iostream>
//using namespace std;
//
//int main() {
//	int n;
//	long long result=0;
//	cin >> n;
//
//	for (int start = 1, len = 1; start <= n; start*=10, len++) {
//		int end = start * 10 - 1;
//		if (end > n) {
//			end = n;
//		}
//		result += (long long)(end - start + 1) * len;
//	}
//	cout << result << '\n';
//	return 0;
//}