Return all codes - String
Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to return the list of all possible codes that can be generated from the given string.
Note : The order of codes are not important. And input string does not contain 0s.
Input format :
A numeric string
Constraints :
1 <= Length of String S <= 10
Sample Input:
1123
Sample Output:
aabc
kbc
alc
aaw
kw


/******************************************************** SOLUTION ******************************************************************/


#include <string.h>
using namespace std;

int getCodes(string input, string output[10000]) {
    int len = input.size();
    if (len==0){
        output[0]="";
        return 1;
    }
    int num = input[0]-48;
    char ch = 'a'+num-1;
    int ans1 = getCodes(input.substr(1),output);
    for(int k = 0; k < ans1;k++)
        output[k]= ch+output[k];
    int ans2 = 0;
    if(input[1] != '\0'){
        num= num*10+input[1]-48;
        ch = num-1+'a';
        if(num>=10 && num<=26){
            ans2=getCodes(input.substr(2),output+ans1);
            for(int p=0;p<ans2;p++){
                output[p+ans1]=ch+output[p+ans1];
                }
            }
            
        }
        return ans1+ans2;
}

