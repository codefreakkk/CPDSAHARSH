#include<bits/stdc++.h>
using namespace std;

int sum(int n) {
	if(n == 0) {
		return 0;
	}
	return (n % 10) + sum(n / 10);
}

int prod(int n) {
	if(n == 0) {
		return 1;
	}
	return (n % 10) * prod(n / 10);
}

int main() {
	// cout << sum(12345) << endl;
	cout << prod(122) << endl;
}