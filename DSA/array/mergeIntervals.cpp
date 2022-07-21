#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> intervals) {
	
	sort(intervals.begin(), intervals.end());
	vector<vector<int>> ans;
	pair<int, int> pr;
	pr.first = intervals[0][0];
	pr.second = intervals[0][1];

	for(int i = 1; i < intervals.size(); i++) {
		if(pr.second >= intervals[i][0]) {
			int firstNum = min(pr.first, intervals[i][0]);
			int secondNum = max(pr.second, intervals[i][1]);
			pr.first = firstNum;
			pr.second = secondNum;
		} 
		else {
			ans.push_back({pr.first, pr.second});
			pr.first = intervals[i][0];
			pr.second = intervals[i][1];
		}
	}
	ans.push_back({pr.first, pr.second});
	return ans;
} 

int main() {
	vector<vector<int>> vc = {
		 {0,0}
	};

	vector<vector<int>> num = merge(vc);

	for(vector<int> nums :  num) {
		for(int i : nums) {
			cout << i << " ";
		}
		cout << endl;
	}
}