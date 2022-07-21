#include<bits/stdc++.h>
using namespace std;

int nextGap(int gap) {
	if(gap <= 1)
		return 0;

	return ceil(gap/2);
}

void mergeArraysAlgo1(vector<int> &nums1, vector<int> &nums2) {
	int j = 0;
	for(int i = 0; i < nums1.size(); i++) {
		if(nums1[i] > nums2[j]) {
			int temp = nums1[i];
			nums1[i] = nums2[j];
			nums2[j] = temp;
			sort(nums2.begin(), nums2.end());
		}
	}
}

void mergeArraysAlgo2(vector<int> &nums1, vector<int> &nums2) {
	int gap = nums1.size() + nums2.size();
	int i = 0, j = 0;
	for(gap = nextGap(gap); gap > 0; gap = nextGap(gap)) {
		// comparing in first array
		for(i = 0; i + gap < nums1.size(); i++) {
			if(nums1[i] > nums1[i + gap])
				swap(nums1[i], nums1[i + gap]); 
		}
		// comparing in both the arrays
		for(j = gap > nums1.size() ? gap - nums1.size() : 0; i < nums1.size() && j < nums2.size(); i++, j++) {
			if(nums1[i] > nums2[j]) 
				swap(nums1[i], nums2[j]);
		}
		// comparing in last array
		for(j = 0; j + gap < nums2.size(); j++) {
			if(nums2[j] > nums2[j + gap]) 
				swap(nums2[j], nums2[j + gap]);
		}
	}
}

int main() {
	vector<int> nums1 = {1,4,7,8,10};
	vector<int> nums2 = {2,3,9};
	// mergeArraysAlgo1(nums1, nums2);	
	mergeArraysAlgo2(nums1, nums2);

	for(int i : nums1) {
		cout << i << " ";
	}
	cout << endl;
	for(int j : nums2) {
		cout << j << " ";
	}
}