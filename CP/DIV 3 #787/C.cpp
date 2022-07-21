#include<bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;

	int ans = 0;
	int n = s.length();

	for(int i = 0; i < n; i++) {
		if(s[i] == '0') {
			ans++;
			break;
		}
		if(s[i] == '1')
			ans = 1;
		if(s[i] == '?')
			ans++;
	}

	cout << ans <<  endl;
}

int main() {
	int t;
	cin >> t;
	
	while(t--) {
		solve();
	}	
}