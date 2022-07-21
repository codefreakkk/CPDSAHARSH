#include<bits/stdc++.h>
using namespace std;

int predicate(vector<int> vc, int mid, int m) {
	int ans = 0;
	int wood = 0;
	for(int i = 0; i < vc.size(); i++) {
		int ans = vc[i] - mid;
		if(ans > 0) {
			wood += ans;
		}
	}
	return wood >= m;
}

int maxHeightToCutWood(vector<int> vc, int n, int m) {
	int low = 0;
	int high = *max_element(vc.begin(), vc.end());
	int ans = 0;
	
	while(low <= high) {
		int mid = (low + high) / 2;
		if(predicate(vc, mid, m)) {
			ans = mid;
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return ans;
}

int main() {
	int n, m;
	vector<int> vc;
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		int a = 0;
		cin >> a;
		vc.push_back(a);
	}

	cout << maxHeightToCutWood(vc, n, m) << endl;
}