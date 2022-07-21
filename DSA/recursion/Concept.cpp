#include<bits/stdc++.h>
using namespace std;

void concept(int n) {
	if(n == 0) {
		return;
	}
	cout << n << endl;
	concept(--n);
}

int main() {
	concept(5);
}