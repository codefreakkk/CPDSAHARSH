#include<bits/stdc++.h>
using namespace std;

void selection(vector<int> &nums, int row, int col, int maximum) {
	if(row == 0) {
		return;
	}

	if(col < row) {
		if(nums[col] > nums[maximum]) {
			selection(nums, row, col + 1, col);
		} else {
			selection(nums, row, col + 1, maximum);
		}
	} else {
		swap(nums[row - 1], nums[maximum]);
		selection(nums, row - 1, 0, 0);
	}
}


int main() {
	vector<int> vc = {5, 4, 3, 2, 1};
	selection(vc, vc.size(), 0, 0);
	for(int i : vc) {
		cout << i << " ";
	}
}