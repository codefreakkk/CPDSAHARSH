
#include<bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;

	set<char> st;
	int len = s.length();
	int ans = 1;
	for(int i = 0; i < len; i++) {
		st.insert(s[i]);
		if(st.size() >= 4) {
			ans++;
			st.clear();
			st.insert(s[i]);
		}
	}
	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}