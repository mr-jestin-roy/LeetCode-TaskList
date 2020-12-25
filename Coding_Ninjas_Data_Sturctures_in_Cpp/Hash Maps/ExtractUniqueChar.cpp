Extract Unique characters
Given a string, you need to remove all the duplicates. That means, the output string should contain each character only once. The respective order of characters should remain same.
Input format :
String S
Output format :
Output String
Constraints :
0 <= Length of S <= 10^8
Sample Input 1 :
ababacd
Sample Output 1 :
abcd
Sample Input 2 :
abcde
Sample Output 2 :
abcde

/*************************************************************** SOLUTION ****************************************************************/

#include <cstring>
#include <unordered_map>
char* uniqueChar(char *str){
    int len = strlen(str);
    if(len == 0){
        char *ans = new char[1];
        ans[0] = '\0';
        return ans;
    }
    char *ans = new char[len + 1];
    unordered_map <char, bool> hm;
    int i = 0;
    for(int currIndex = 0; currIndex < len; currIndex++){ 
        char currChar = str[currIndex];
        if(hm.count(currChar) == 0){
            hm[currChar] = true;
            ans[i++] = currChar;
        } 
    }
    ans[i] = '\0';
    return ans;
}
