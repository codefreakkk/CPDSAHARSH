#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &nums) {
	int n = nums.size();
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < i; j++) 
			swap(nums[i][j], nums[j][i]);
	}

	for(int i = 0; i < n; i++) {
		reverse(nums[i].begin(), nums[i].end());
	}
}

int main() {
	vector<vector<int>> vc = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	rotate(vc);

	for(vector<int> nums : vc) {
		for(int i : nums) {
			cout << i << " ";
		}
		cout << endl;
	} 
}