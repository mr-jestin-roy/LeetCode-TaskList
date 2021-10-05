Length of LL (recursive)
Given a linked list, find and return the length of input LL recursively.
Input format :
Linked list elements (separated by space and terminated by -1)
Output format :
Length of LL
Sample Input :
3 4 5 2 6 1 9 -1
Sample Output :
7


/***************************************************** SOLUTION **********************************************************************/


int length(Node *head) {
    if(head==NULL)
        return 0;
    else
        return length(head->next)+1;
}
/*
int length(Node *head) {
    
    int count = 0; // Initialize count  
    Node* current = head; // Initialize current  
    while (current != NULL)  
    {  
        count++;  
        current = current->next;  
    }  
    return count;  
}
*/
