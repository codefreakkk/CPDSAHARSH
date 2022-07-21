#include<bits/stdc++.h>
using namespace std;

// void print(int n) {
// 	if(n == 5) {
// 		cout << n << endl;
// 		return;
// 	}
// 	cout << n << endl;
// 	print(n + 1);
// }

void print(int n) {
	if(n == 0) {
		return;
	}
	print(n - 1);
	cout << n << endl;
}

int main() {
	print(5);
}