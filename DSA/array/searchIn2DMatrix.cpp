#include<bits/stdc++.h>
using namespace std;

bool search(vector<int> nums, int target) {
	int low = 0;
	int high = nums.size() - 1;

	while(low <= high) {
		int mid = (low + high) / 2;
		if(nums[mid] == target) {
			return true;
		}
		else if(nums[mid] < target)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return false;
}

bool searchMatrix(vector<vector<int>> &nums, int target) {
	int n = nums.size();

	for(int i = 0; i < n; i++) {
		int m = nums[i].size();
		if(nums[i][m - 1] >= target) {
			return search(nums[i], target);
		}
	}

	return false;
}

int main() {
	vector<vector<int>> vc = {
		{1,3,5,7},{10,11,16,20},{23,30,34,60}
	};
	int target = 60;
	cout << searchMatrix(vc, target);
}