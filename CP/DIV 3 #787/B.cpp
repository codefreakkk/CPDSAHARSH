#include<bits/stdc++.h>
using namespace std;

void solve() {
		int n;
		cin >> n;
		vector<int> nums(n);
		for(int &i : nums) cin >> i;
		
		int cnt = 0;
		for(int i = n - 2; i >= 0; i--) {
			while(nums[i] >= nums[i + 1] && nums[i] > 0) {
				nums[i] /= 2;
				cnt++;
			}
			if(nums[i] == nums[i + 1]) {
				cout << -1 << endl;
				return;
			}
		}
		cout << cnt << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}	
}