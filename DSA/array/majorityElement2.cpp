#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums) {
	vector<int> ans;
	if(nums.size() == 1) {
		ans.push_back(nums[0]);
		return ans;
	}
	sort(nums.begin(), nums.end());
	int start = 0;
	int n = nums.size();
	int i = 0;

	for(i = 0; i < n - 1; i++) {
		if(nums[i] != nums[i + 1]) {
			int cnt = (i - start) + 1;
			if(cnt > (n / 3)) {
				ans.push_back(nums[i]);
			}
			start = i + 1;
		}
	}
	int cnt = (i - start) + 1;
	if(cnt > (n / 3)) {
		ans.push_back(nums[i]);
	}
	return ans;
}

int main() {
	vector<int> vc = {1};
	vector<int> ans = majorityElement(vc);

	for(int i : ans) {
		cout << i << " ";
	}
}