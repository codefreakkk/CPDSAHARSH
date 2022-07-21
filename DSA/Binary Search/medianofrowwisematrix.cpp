#include<bits/stdc++.h>
using namespace std;

int countSmallerThanMid(vector<int> vc, int mid) {
	int start = 0;
	int end = vc.size() - 1;
	while(start <= end) {
		int middle = (start + end) / 2;
		if(vc[middle] <= mid) {
			start = middle + 1;
		}
		else {
			end = middle - 1;
		}
	}
	return start;
}

int findMedian(vector<vector<int>> vc) {
	int start = 1;
	int end = 15;
	int n = vc.size();
	int m = vc[0].size();
	while(start <= end) {
		int mid = (start + end) / 2;
		int cnt = 0;
		for(int i = 0; i < n; i++) {
			cnt += countSmallerThanMid(vc[i], mid);
		}

		if(cnt <= (n * m) / 2) {
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
	return start;
}

int main() {
	vector<vector<int>> vc = {{1,3,5}, {2, 6, 9}, {3,6,9}};
	cout << findMedian(vc);
}