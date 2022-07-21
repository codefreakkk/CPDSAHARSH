#include<bits/stdc++.h>
using namespace std;

void printNos(int n) {
	if(n == 1) {
		cout << n << endl;
		return;
	}
	cout << n << endl;	
	printNos(n - 1);
}

int main() {
	printNos(5);
}

