#include<bits/stdc++.h>
using namespace std;

int countInversion(vector<int> nums) {
	int cnt = 0;
	int n = nums.size();
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(nums[i] > nums[j]) 
				cnt++;
		}
	}

	return cnt;
}

int main() {
	vector<int> vc = {8, 4, 8};
	cout << countInversion(vc);	
}