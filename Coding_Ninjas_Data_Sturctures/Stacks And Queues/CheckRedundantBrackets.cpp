Check redundant brackets
Given a string mathematical expression, return true if redundant brackets are present in the expression. Brackets are redundant if there is nothing inside the bracket or more than one pair of brackets are present.
Assume the given string expression is balanced and contains only one type of bracket i.e. ().
Note: You will not get partial score for this problem. You will get marks only if all test cases are passed.
Input Format :
String s (Expression)
Output Format :
true or false
Sample Input 1:
((a + b)) 
Sample Output 1:
true
Sample Input 2:
(a+b) 
Sample Output 2:
false


/****************************************************** SOLUTION *************************************************************************/


#include <stack>
#include <cstring>
bool checkRedundantBrackets(char *input) {
    stack<char> s;
    bool flag = false;
    for(int i = 0; i < strlen(input); i++) { 
        if(input[i] != ')') {
            s.push(input[i]);
        }
        else { 
            while(s.top() != '(') {
                s.pop();
                flag = true;
                if(s.empty()) { 
                    break;
                }
            }
            if(s.empty()) {
                continue;
            }
            if(flag) { 
                s.pop();
                flag = false;
            }
            else {
                return true;
            }
        }
    }
    return false;
}
/*
#include<stack>
bool checkRedundantBrackets(char *input) {
	// Write your code here
    stack<char> s;
    int i = 0;
  
    // Iterate through the given expression 
    while(input[i] != '\0'){
        if(input[i] == ')'){
            int count = 0;
            while(s.top()!='(' ){
                count++;
                s.pop(); 
            }
            s.pop();
            if(count == 0 || count == 1){
                return true;
            }
            i++;
        }
        else{
            s.push(input[i]);
            i++;
        }
    }
    return false;
}
*/
