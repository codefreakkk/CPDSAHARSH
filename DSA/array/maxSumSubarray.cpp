#include<bits/stdc++.h>
using namespace std;

// Algo 1 - O(n square) Solution
void maxSumSubarray1(vector<int> nums) {

	// int n = nums.size();
	// code to print subarray 
	// for(int i = 0; i < n - 1; i++) {
	// 	for(int j = i; j < n; j++) {
	// 		for(int k = i; k <= j; k++) {
	// 			cout << nums[k] << " ";
	// 		}
	// 		cout << endl;
	// 	}
	// }

	// Max Sum subarray O(n square) Solution

	// int sum = 0, maxi = 0;
	// int index1 = 0;
	// int index2 = 0;

	// for(int i = 0; i < n - 1; i++) {
	// 	sum = 0;
	// 	for(int j = i; j < n; j++) {
	// 		sum += nums[j];
	// 		if(sum > maxi) {
	// 			maxi = sum;
	// 			// Store the starting and ending index of max sum subarray
	// 			index1 = i;
	// 			index2 = j;
	// 		}
	// 	}	
	// }
	
	// cout << maxi << endl;
	// cout << index1 << " " << index2 << endl;
}

int maxSumSubarray(vector<int> nums) {
	int sum = 0;
	int n = nums.size();
	int maxi = nums[0];

	for(int i = 0; i < n; i++) {
		sum += nums[i];
		maxi = max(sum, maxi);
		if(sum < 0) 
			sum = 0;
		
	}

	return maxi;
}

int main() {
	vector<int> vc = {-2, -3, 4, -1, -2, 1, 5, -3};
	// maxSumSubarray1(vc);
	cout << maxSumSubarray(vc);
}