#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
		
	while(t--) {
		
		int a, b, c, x, y;
		cin >> a >> b >> c >> x >> y;
		int dogdiff = x - a;
		
		if(dogdiff < 0)
			dogdiff = 0;
		int catdiff = y - b;
		if(catdiff < 0) 
			catdiff = 0;

		int total = dogdiff + catdiff;

		if(c >= total)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}

	return 0;
}