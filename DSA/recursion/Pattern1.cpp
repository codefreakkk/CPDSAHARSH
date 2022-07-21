#include<bits/stdc++.h>
using namespace std;

// void traingle(int row, int col) {
// 	if(row == 0) {
// 		return;
// 	}
// 	if(col == row) {
// 		cout << "* ";
// 		cout << endl;
// 		col = 0;
// 		--row;
// 	}
// 	cout << "* ";
// 	traingle(row, col + 1);
// }

// pure recursion
void traingle(int row, int col) {
	if(row == 0) {
		return;
	}
	if(col < row) {
		cout << "* ";
		traingle(row, col + 1);
	} else {
		cout << endl;
		traingle(row - 1, 0);
	}
}

void normalTraingle(int row, int col) {
	if(row == 0) {
		return;
	}
	if(col < row) {
		normalTraingle(row, col + 1);
		cout << "*";
	} else {
		normalTraingle(row - 1, 0);
		cout << endl;
	}
}

int main() {
	normalTraingle(2, 0);
}