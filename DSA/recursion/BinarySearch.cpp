#include<bits/stdc++.h>
using namespace std;

int search(vector<int> vc, int target, int s, int e) {
	if(s > e) {
		return -1;
	}
	int mid = (s + e) / 2;
	if(target == vc[mid]) {
		return mid;
	}
	if(vc[mid] < target) {
		return search(vc, target, mid + 1, e);
	}
	return search(vc, target, s, mid - 1);
}

int main() {
	vector<int> vc = {1,2,3,4,5};
	cout << search(vc, 2, 0, vc.size() - 1);
}