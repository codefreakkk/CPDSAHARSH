#include<bits/stdc++.h>
using namespace std;

void swap(int i, int m, vector<int> &nums) {
	int temp = nums[i];
	nums[i] = nums[m];
	nums[m] = temp;
}

void moveZeros(vector<int> &nums) {
	int n = nums.size();
	int m = 0;

	for(int i = 0; i < n; i++) {
		if(nums[i] != 0) {
			swap(i, m, nums);
			m++;
		} 
	}
}

int main() {
	vector<int> vc = {3, 0, 0, 4, 1};
	moveZeros(vc);

	for(int i : vc) {
		cout << i << " ";
	}
}