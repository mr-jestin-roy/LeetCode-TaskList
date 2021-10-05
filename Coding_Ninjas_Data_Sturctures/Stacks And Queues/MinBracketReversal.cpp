Minimum bracket Reversal
Given a string expression which consists only ‘}’ and ‘{‘. The expression may not be balanced. You need to find the minimum number of bracket reversals which are required to make the expression balanced.
Return -1 if the given expression can't be balanced.
Input Format :
String S
Output Format :
Required count
Sample Input 1 :
{{{
Sample Output 1 :
-1
Sample Input 2 :
{{{{}}
Sample Output 2 :
1



/****************************************************** SOLUTION *************************************************************************/


#include<stack>
using namespace std;

int len(char* a){
	if(*a == 0)
		return 0;
	else
		return 1 + len(a+1);
}
int countBracketReversals(char input[]){
	// Write your code here
    stack<char> st;
	int l = len(input);
	int count;
	if(l % 2 == 0){
		for(int i = 0; input[i] != 0; i++){
			if(input[i] == '{')
				st.push(input[i]);
			else if(input[i] == '}' && !st.empty()){
				if(st.top() == '{')
			       		st.pop();
				else
					st.push(input[i]);

			}
			else
				st.push(input[i]);	
		}
		count = 0;
		while(!st.empty()){
			char c1 = st.top();
			st.pop();
			char c2 = st.top();
			st.pop();
			if(c1 == c2)
				count++;
			else
				count += 2;
		}
		return count;
	}else{
		return -1;
	}
}
