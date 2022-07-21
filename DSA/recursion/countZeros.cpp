#include<bits/stdc++.h>
using namespace std;
// int helper(int n, int m, int cnt) {
// 	if(n == 0) {
// 		++cnt;
// 	}
// 	if(m == 0) {
// 		return cnt;
// 	}
// 	return helper(m % 10, m / 10, cnt);
// }

// int countZeros(int n) {
// 	int cnt = 0;
// 	return helper(n % 10, n / 10, cnt);
// }

int countZeros(int n, int count) {
	if(n == 0) {
		return count;
	}
	if(n % 10 == 0) {
		return countZeros(n / 10, count + 1);
	} else {
		return countZeros(n / 10, count);
	}
}

int main() {
	cout << countZeros(123010, 0) << endl;

}