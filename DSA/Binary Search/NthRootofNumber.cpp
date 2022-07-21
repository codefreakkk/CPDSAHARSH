#include<bits/stdc++.h>
using namespace std;

double multiply(double mid, int n) {
	double ans = 1.0;
	for(int i = 0; i < n; i++) {
		ans = ans * mid;
	}
	return ans;
}

double nthRoot(int n, int m) {
	double low = 1;
	double high = m;
	double eps = 1e-6;
	while((high - low) > eps) {
		double mid = (low + high) / 2;
		if(multiply(mid, n) < m) {
			low = mid;
		}
		else {
			high = mid;
		}
	}
	return low;

}

int main() {
	double ans = nthRoot(3,27);
	cout << ans;
}