#include<bits/stdc++.h>
using namespace std;

void bsort(vector<int> &nums, int row, int col) {
	if(row == 0) {
		return;
	}

	if(col < row) {

		if(nums[col] > nums[col + 1]) {
			swap(nums[col], nums[col + 1]);
		}

		bsort(nums, row, col + 1);	
	} else {
		bsort(nums, row - 1, 0);
	}
}

int main() {
	vector<int> vc = {5, 4, 3, 2, 1};
	bsort(vc, vc.size() - 1, 0);
	for(int i : vc) {
		cout << i << " ";
	}
}