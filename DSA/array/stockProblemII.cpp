#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> nums) {
	int sum = 0;
	int n = nums.size();

	for(int i = 1; i < n; i++) {
		int diff = nums[i] - nums[i - 1];
		if(diff > 0) {
			sum += diff;
		}
	}
	return sum;
} 

int main() {
	vector<int> vc = {5, 2, 7, 3, 6, 1, 2, 4};
	cout << maxProfit(vc) << endl;
}