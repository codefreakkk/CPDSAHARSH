#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums) {
	int low = 0;
	int mid = 0;
	int high = nums.size() - 1;

	while(mid <= high) {
		if(nums[mid] == 1) 
			mid++;
		else if(nums[mid] == 0) {
			int temp = nums[mid];
			nums[mid] = nums[low];
			nums[low] = temp;
			mid++;
			low++;
		}
		else {
			int temp = nums[mid];
			nums[mid] = nums[high];
			nums[high] = temp;
			high--;
		}
	} 

}

int main() {
	vector<int> vc = {2,0,1};
	sortColors(vc);

	for(int i : vc) {
		cout << i << " ";
	}	
}