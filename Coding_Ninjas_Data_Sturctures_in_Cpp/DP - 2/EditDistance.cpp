Code : Edit Distance
Given two strings s and t of lengths m and n respectively, find the Edit Distance between the strings. Edit Distance of two strings is minimum number of steps required to make one string equal to other. In order to do so you can perform following three operations only :
1. Delete a character

2. Replace a character with another one

3. Insert a character
Note - Strings don't contain spaces
Input Format :
Line 1 : String s
Line 2 : String t
Output Format :
Line 1 : Edit Distance value
Constraints
1<= m,n <= 10
Sample Input 1 :
abc
dc
Sample Output 1 :
2


/******************************************************* SOLUTION ************************************************************************/


#include <iostream> 
#include <vector>
using namespace std;
int editDistance(string s1, string s2){ 
    int n = s1.length();
    int m = s2.length();
    if(s1.size() == 0 || s2.size() == 0) {
        return max(s1.size(), s2.size());
    }
    if (s1[0] == s2[0]) {
        return editDistance(s1.substr(1), s2.substr(1)); 
    }
    return 1 + min(editDistance(s1.substr(1), s2), min(editDistance(s1, s2.substr(1)), editDistance(s1.substr(1), s2.substr(1))));
}


/*
#include <iostream>
#include <vector>
using namespace std;

int editDistance(string s, string t){
    // Base case
	if(s.size() == 0 || t.size() == 0) {
		return max(s.size(), t.size());
	}


	if(s[0] == t[0]) {
		return editDistance(s.substr(1), t.substr(1));
	}
	else {
		// Insert
		int x = editDistance(s.substr(1), t) + 1;
		// Delete
		int y = editDistance(s, t.substr(1)) + 1;
		// Replace
		int z = editDistance(s.substr(1), t.substr(1)) + 1;

		return min(x, min(y, z));
	}
}*/
