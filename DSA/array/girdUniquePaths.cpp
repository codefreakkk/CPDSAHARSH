#include<bits/stdc++.h>
using namespace std;

int paths(int m, int n) {
	int N = (m + n) - 2;
	int r = m - 1;
	double result = 1;

	for(int i = 1; i <= r; i++) {
		result = result * (N - r + i) / i;
	}
	return (int)result;
}

int main() {
	int m = 3;
	int n = 2;
	cout << paths(m, n) << endl;
}