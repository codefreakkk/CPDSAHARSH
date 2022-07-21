#include<bits/stdc++.h>
using namespace std;

double myPow(double x, int nn) {
	double ans = 1.0;
	long long n = nn;
	if(n < 0) n = -1 * n;
	while(n) {
		if(n % 2) {
			ans = ans * x;
			n = n - 1;
		} 
		else {
			x = x * x;
			n = n / 2;
		}
	}
	if(n < 0) ans = (double) 1.0 / (double) ans;
	return ans;
}

int main() {
	cout << myPow(2.00000, -2) << endl;
}