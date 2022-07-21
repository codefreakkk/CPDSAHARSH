#include<bits/stdc++.h>
using namespace std;

bool sorted(vector<int> arr, int i) {
	if(i == arr.size() - 1) {
		return true;
	}
	return arr[i] <= arr[i + 1] && sorted(arr, i + 1);
}

int main() {
	vector<int> vc = {1, 2, 3, 5, 8, 10, 11};
	bool ans = sorted(vc, 0);
	cout << ans << endl;
}