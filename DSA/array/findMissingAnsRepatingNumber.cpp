#include<bits/stdc++.h>
using namespace std;

int getBit(int num, int pos) {
	int bit = 1 << pos;
	int ans = num & bit;
	return ans;
}

void findMissingAndRepeatingNumber(vector<int> nums) {
	int xor1 = 0;
	int xor2 = 0;
	for (int i = 0; i < nums.size(); ++i)
	{
		xor1 ^= nums[i];
	}

	for(int i = 1; i <= nums.size(); i++) {
		xor2 ^= i;
	}
	int ans = xor1 ^ xor2;
	
	// get the right most bit elements
	int bucket1 = 0;
	int bucket2 = 0;

	// find the pos of ans 
	int pos = 0;
	int bit = ans;
	while(bit != 0) {
		bit = bit >> 1;
		++pos;
	} 

	for(int i = 0; i < nums.size(); i++) {
		if(getBit(nums[i], pos - 1) != 0) {
			bucket1 ^= nums[i];
		}
		else {
			bucket2 ^= nums[i];
		}
	}

	for(int i = 1; i <= nums.size(); i++) {
		if(getBit(i, pos - 1) != 0) {
			bucket1 ^= i;
		}
		else {
			bucket2 ^= i;
		}
	}

	cout << bucket1 << " " << bucket2 << endl;
}

int main() {
	vector<int> vc = {4,4,3,6,2,5};	
	findMissingAndRepeatingNumber(vc);
}