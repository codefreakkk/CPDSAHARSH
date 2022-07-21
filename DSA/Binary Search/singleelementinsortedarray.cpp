#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int> nums) {
	int start = 0;
	int end = nums.size() - 2;

	while(start <= end) {
		int mid = (start + end) / 2;
		if(mid % 2 == 0) {
			if(nums[mid] == nums[mid + 1]) {
				start = mid + 1;
			}
			else {
				end = mid - 1;
			}
		}
		else {
			if(nums[mid] == nums[mid - 1]) {
				start = mid + 1;
			}
			else {
				end = mid - 1;
			}
		}
	}
	return nums[start]; 
}

int main() {
	vector<int> vc = {3,3,7,7,10,11,11};
	cout << singleNonDuplicate(vc) << endl;
}