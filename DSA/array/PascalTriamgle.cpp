#include<bits/stdc++.h>
using namespace std;

void generate(int rows) {
	vector<vector<int>> r(rows);

	for(int i = 0; i < rows; i++) {
		r[i].resize(i + 1);
		r[i][0] = r[i][i] = 1;

		for(int j = 1; j < i; j++) {
			r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
		}
	}

	for(vector<int> vc : r) {
		for(int i : vc) {
			cout << i << " ";
		}
		cout << endl;
	}
}

int main() {
	int rows = 5;
	generate(rows);
}