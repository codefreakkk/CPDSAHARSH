#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int num = n;
	string snum = to_string(n);
	int digit = snum.length();
	int ans = num - pow(10, digit - 1);
	cout << ans << endl;

}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}