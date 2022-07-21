#include<bits/stdc++.h>
using namespace std;

// int ans = 0;
// void rev(int n) {
// 	if(n == 0) {
// 		return;
// 	}
// 	int rem = n % 10;
// 	ans = ans * 10 + rem;
// 	rev(n / 10);
// }

int rev2(int n, int digits) {
	if((n % 10) == n) {
		return n;
	}
	return (n % 10) * pow(10, digits - 1) + rev2(n / 10, digits - 1);
}

int countDigits(int n) {
	int cnt = 0;
	while(n > 0) {
		cnt++;
		n /= 10;
	}
	return cnt;
}

int main() {
	int n = 122;
	int digits = countDigits(n);
	cout << rev2(n, digits) << endl;
}