Reverse Stack
Reverse a given Stack with the help of another empty stack. Two stacks will be given. Out of which first contains some integers and second one is empty. You need to reverse the first one using second stack. Change in the given first stack itself.
Note : You don't need to print or return the stack, just reverse the given stack and it will be printed internally.
Input format :
Line 1 : Size of Stack
Line 2 : Stack elements (separated by space)
Sample Input 1 :
4 
1 2 3 4     (4 is at top)
Sample Output 1 :
1 2 3 4    (1 is at top)


/****************************************************** SOLUTION *************************************************************************/

#include <stack>
void reverseStack(stack<int> &s1, stack<int> &s2) {
    if(s1.size() <= 1)
        return ;
    
    int lastElem = s1.top();
    
    s1.pop();
    reverseStack(s1,s2);
    while(!s1.empty()){
        int a = s1.top();
        s1.pop();
        s2.push(a);
    }
    s2.push(lastElem);
    
    while(!s2.empty()){
        int a = s2.top();
        s2.pop();
        s1.push(a);
    }
}
