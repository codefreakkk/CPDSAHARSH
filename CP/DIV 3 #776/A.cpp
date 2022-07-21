#include<bits/stdc++.h>
using namespace std;

int main() {
	int flag = 0;
	string s = "";
	char c;
	cin >> s;
	cin >> c;

	for(int i = 0; i < s.length(); i++) {
		if(s[i] == c) {
			flag = 1;
			break;
		}
	}
	if(flag == 1) 
		cout << "YES";
	int a = 2 / 3;
	cout << a;
}