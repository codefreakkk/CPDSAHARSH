#include<bits/stdc++.h>
using namespace std;

int reversePair(vector<int> nums) {
	int cnt = 0;
	int n = nums.size();
	for(int i = 0; i < n - 1; i++) {
		for(int j = i + 1; j < n; j++) {
			if(nums[i] > nums[j] * 2) {
				cnt++;
			}
		}
	}
	return cnt;
}

int main() {
	vector<int> vc = {2,4,3,5,1};
	cout << reversePair(vc) << endl;
}
