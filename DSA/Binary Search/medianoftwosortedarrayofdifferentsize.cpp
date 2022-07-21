#include<bits/stdc++.h>
using namespace std;

double findMededianSortedArray(vector<int> nums1, vector<int> nums2) {
	int n1 = nums1.size();
	int n2 = nums2.size();
	int low = 0;
	int high = n1;

	while(low <= high) {
		int mid = (low + high) / 2;
		int cut1 = mid;
		int cut2 = (n1 + n2 + 1) / 2 - cut1;

		int l1 = cut1 == 0 ? INT_MIN : nums1[cut1 - 1];
		int l2 = cut2 == 0 ? INT_MIN : nums2[cut2 - 1];

		int r1 = cut1 == n1 ? INT_MAX : nums1[cut1];
		int r2 = cut2 == n2 ? INT_MAX : nums2[cut2]; 

		if(l1 > r2) {
			high = mid - 1;
		} 
		else if (l2 > r1) {
			low = mid + 1;
		}
		else {
			if((n1 + n2) % 2 == 0) {
				return (max(l1,l2) + min(r1, r2)) / 2.0;
			}
			else {
				return max(l1, l2);
			}
		}
	}
	return 0.0;
}

int main() {
	vector<int> vc1 = {1,2};
	vector<int> vc2 = {3,4};
	cout << findMededianSortedArray(vc1, vc2) << endl;
}