#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> nums) {
	int cnt = 0;
	int element = 0;
	int n = nums.size();

	for(int i = 0; i < n; i++) {
		if(cnt == 0) 
			element = nums[i];
		if(element == nums[i])
			cnt++;
		else
			cnt--;
	}

	return element;
}

int main() {
	vector<int> vc = {7, 7, 7, 7, 1};
	cout << majorityElement(vc) << endl;
}