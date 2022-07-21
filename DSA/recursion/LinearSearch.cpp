#include<bits/stdc++.h>
using namespace std;

// int search(vector<int> arr, int target, int index) {
// 	if(index == arr.size()) {
// 		return -1;
// 	}
// 	if(arr[index] == target) {
// 		return index;
// 	}
// 	return search(arr, target, index + 1);
// }

// vector<int> allIndex;
// void searchAllIndex(vector<int> arr, int target, int index) {
// 	if(index == arr.size()) {
// 		return;
// 	}
// 	if(arr[index] == target) {
// 		allIndex.push_back(index);
// 	}
// 	return searchAllIndex(arr, target, index + 1);
// }

// vector<int> searchAllIndex(vector<int> arr, int target, int index, vector<int> ans) {
// 		if(index == arr.size()) {
// 			return ans;
// 		}
// 		if(arr[index] == target) {
// 			ans.push_back(index);
// 		}
// 		return searchAllIndex(arr, target, index + 1, ans);
// }

vector<int> searchAllIndex(vector<int> nums, int target, int index) {
	vector<int> answer;
	if(index == nums.size()) {
		return answer;
	}
	if(nums[index] == target) {
		answer.push_back(index);
	}
	vector<int> answerFromBelowCalls = searchAllIndex(nums, target, index + 1);
	// this answer vector has current function call answer and answer from below call is going to be adeed into this vector
	answer.insert(answer.end(), answerFromBelowCalls.begin(), answerFromBelowCalls.end());
	return answer;


	// this is also a possible way to insert element and return the list
	// answerFromBelowCalls.insert(answerFromBelowCalls.begin(), answer.begin(), answer.end());
	// return answerFromBelowCalls;
}

int main() {
	vector<int> vc = {1, 2, 3, 4, 2};
	int target = 2;
	// cout << search(vc, target, 0) << endl;
	// searchAllIndex(vc, target, 0);
	vector<int> allIndex;
	// vector<int> ans = searchAllIndex(vc, target, 0, allIndex);
	vector<int> ans = searchAllIndex(vc, target, 0);
	for(int i : ans) {
		cout << i << " ";
	}
}