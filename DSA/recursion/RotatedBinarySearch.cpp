#include<bits/stdc++.h>
using namespace std;

int search(vector<int> nums, int target, int start, int end) {
	if(start > end) {
		return -1;
	}

	int middle = (start + end) / 2;
	if(target == nums[middle]) {
		return middle;
	}

	if(nums[start] <= nums[middle]) {
		if(target >= nums[start] && target <= nums[middle]) {
			return search(nums, target, start, middle - 1);
		} else {
			return search(nums, target, middle + 1, end);
		}
	}
	if(target >= nums[middle] && target <= nums[end]) {
		return search(nums, target, middle + 1, end);
	} 

	return search(nums, target, start, middle - 1);

}

int main() {
	vector<int> nums = {5, 6, 1, 2, 3};
	int target = 6;
	cout << search(nums, target, 0, nums.size() - 1);
}