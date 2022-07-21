#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> nums) {
	int mini = INT_MAX;
	int profit = 0;
	int n = nums.size();

	for(int i = 0; i < n; i++) {
		mini = min(nums[i], mini);
		int diff = nums[i] - mini;
		profit = max(diff, profit);
	}

	return profit;
}

int main() {
	vector<int> vc = {7,8,4,3,1};
	cout << maxProfit(vc);	
}