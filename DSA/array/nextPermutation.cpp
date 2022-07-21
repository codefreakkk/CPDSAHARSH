#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> nums) {
	int index1 = -1;
	int index2 = -1;
	int flag = 1;

	for(int i = nums.size() - 2; i >= 0; i--) {
		if(nums[i] < nums[i + 1]) {
			index1 = i;
			flag = 0;
			break;
		}
	}

	if(flag == 1) {
		reverse(nums.begin(), nums.end());
	}
	else {
		for(int i = nums.size() - 1; i >= 0; i--) {
			if(nums[i] > nums[index1]) {
				swap(nums[i], nums[index1]);
				break;
			}
		}
	}

	reverse(nums.begin() + index1 + 1, nums.end());

	// print the array
	for(int i = 0; i < nums.size(); i++) 
		cout << nums[i] << " ";
}

int main() {
	vector<int> vc = {3, 2, 1};
	nextPermutation(vc);
}