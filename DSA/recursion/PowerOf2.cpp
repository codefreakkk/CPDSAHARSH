#include<bits/stdc++.h>
using namespace std;

int powerOf2(int n) {
	if(n == 1) {
		return 2;
	}
	return 2 * powerOf2(n - 1);
}

int main() {
	cout << powerOf2(6);
}