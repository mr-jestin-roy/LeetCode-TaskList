Palindrome LinkedList
Check if a given linked list is palindrome or not. Return true or false.
Indexing starts from 0.
Input format : Linked list elements (separated by space and terminated by -1)

Sample Input 1 :
9 2 3 3 2 9 -1
Sample Output 1 :
true
Sample Input 2 :
0 2 3 2 5 -1
Sample Output 2 :
false



/***************************************************** SOLUTION **********************************************************************/


#include<bits/stdc++.h> 
using namespace std;
bool check_palindrome(node* head)
{
    node* slow= head; 
  
        // Declare a stack  
        stack <int> s; 
   
  
        // Push all elements of the list  
        // to the stack  
        while(slow != NULL){ 
                s.push(slow->data); 
  
                // Move ahead  
                slow = slow->next;
        } 
  
        // Iterate in the list again and  
        // check by popping from the stack 
        while(head != NULL ){ 
              
            // Get the top most element  
             int i=s.top(); 
  
             // Pop the element  
             s.pop(); 
  
             // Check if data is not 
             // same as popped element  
            if(head -> data != i){ 
                return false; 
            } 
  
            // Move ahead  
           head=head->next;
        } 
  
    return true; 
}
