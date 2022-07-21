// JP MORGAN CODING TEST QUESTION


// harsh sachin said's solution
#include<bits/stdc++.h>
using namespace std;

string maximumString(string str) {
	int slen = str.length();
	int j = slen - 1;
	int q = j;
	string ans = "";
	string part = "";
	for(int i = slen - 1; i >= 0; i--) {
		while(str[j] != ' ') {
			if(j <= 0) {
				j = 0;
				break;
			}
			j--;
		}

		if(j == 0) {
		 	part = str.substr(0, (q - j) + 1); 
		 	i = 0;
		} else {
			part = str.substr(j + 1, q - j);
			i = q;
		}

		if(part.length() % 2 == 0) {
			if(part.length() == ans.length())
				ans = part;
			else if(part.length() > ans.length()) 
				ans = part;
		}
		j = j - 1;
		q = j;
	}
	return ans;
}

int main() {
	string str = "this is a test string";
	cout << maximumString(str);	
}


// // GEEKS FOR GEEKS SOLUTION
// string findMaxLenEven(string str)
// {
//     int n = str.length();
 
//     int i = 0;
 
//     // To store length of current word.
//     int currlen = 0;
 
//     // To store length of maximum length word.
//     int maxlen = 0;
 
//     // To store starting index of maximum
//     // length word.
//     int st = -1;
 
//     while (i < n) {
 
//         // If current character is space then
//         // word has ended. Check if it is even
//         // length word or not. If yes then
//         // compare length with maximum length
//         // found so far.
//         if (str[i] == ' ') {
//             if (currlen % 2 == 0) {
//                 if (maxlen < currlen) {
//                     maxlen = currlen;
//                     st = i - currlen;
//                 }
//             }
 
//             // Set currlen to zero for next word.
//             currlen = 0;
//         }
//         else {
//             // Update length of current word.
//             currlen++;
//         }
 
//         i++;
//     }
 
//     // Check length of last word.
//     if (currlen % 2 == 0) {
//         if (maxlen < currlen) {
//             maxlen = currlen;
//             st = i - currlen;
//         }
//     }
 
//     // If no even length word is present
//     // then return -1.
//     if (st == -1)
//         return "-1";
 
//     return str.substr(st, maxlen);
// }
//  