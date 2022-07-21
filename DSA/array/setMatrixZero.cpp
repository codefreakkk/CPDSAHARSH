#include<bits/stdc++.h>
using namespace std;

// algo 1
void setZero1(vector<vector<int>> &nums) {
	int n = nums.size();
	int m = nums[0].size();
	vector<int> vc1(n, -1);
	vector<int> vc2(m, -1);

	// traverse matrix and set frequency array to zero
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(nums[i][j] == 0) {
				vc1[i] = 0;
				vc2[j] = 0;
			}
		}
	}
	// set matrix values to zero 
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(vc1[i] == 0 || vc2[j] == 0) {
				nums[i][j] = 0;
			}
		}
	}

}

void setZero(vector<vector<int>> &nums) {
	bool col = true;
	int n = nums.size();
	int m = nums[0].size();

	for(int i = 0; i < n; i++) {
		if(nums[i][0] == 0) col = false;
		for(int j = 1; j < m; j++) {
			if(nums[i][j] == 0) {
				nums[i][0] = nums[0][j] = 0;
			}
		}
	}

	for(int i = n - 1; i >= 0; i--) {
		for(int j = m - 1; j >= 1; j--) {
			if(nums[i][0] == 0 || nums[0][j] == 0) {
				nums[i][j] = 0;
			}
		}
		if(col == false) nums[i][0] = 0;
	}
}

int main() {
	vector<vector<int>> vc = {
		{1, 1, 1, 1},
		{1, 0, 1, 1},
		{1, 1, 0, 1},
		{0, 0, 0, 1}
	};

	// setZero1(vc);
	setZero(vc);
	
	int n = vc.size();
	int m = vc[0].size();
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cout << vc[i][j];
		}
		cout << endl;
	}

	
}