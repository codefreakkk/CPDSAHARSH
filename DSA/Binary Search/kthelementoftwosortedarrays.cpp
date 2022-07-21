#include<bits/stdc++.h>
using namespace std;

int kthElement(vector<int> nums1, vector<int> nums2, int k) {
	int n1 = nums1.size();
	int n2 = nums2.size();
	
	if(n2 > n1) return kthElement(nums2, nums1, k);

	int low = max(0, k - n1);
	int high = min(k, n1);

	while(low <= high) {
		int mid = (low + high) / 2;
		int cut1 = mid;
		int cut2 = k - cut1;

		int l1 = cut1 == 0 ? INT_MIN : nums1[cut1 - 1];
		int l2 = cut2 == 0 ? INT_MIN : nums2[cut2 - 1];

		int r1 = cut1 == n1 ? INT_MAX : nums1[cut1];
		int r2 = cut2 == n2 ? INT_MAX : nums2[cut2];

		if(l1 > r2) {
			high = mid - 1;
		} 
		else if(l2 > r1) {
			low = mid + 1;
		}
		else {
			return max(l1, l2);
		}
	}
	return -1;
}

int main() {
	vector<int> vc1 = {7,12,14,15};
	vector<int> vc2 = {1,2,3,4,9,11};
	int k = 5;
	cout << kthElement(vc1, vc2, k);
}