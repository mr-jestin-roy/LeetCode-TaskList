Code: Reverse LL (Iterative)
Given a linked list, reverse it iteratively.
You don't need to print the elements, just reverse the LL duplicates and return the head of updated LL.
Input format : Linked list elements (separated by space and terminated by -1)`

Sample Input 1 :
1 2 3 4 5 -1
Sample Output 1 :
5 4 3 2 1


/***************************************************** SOLUTION **********************************************************************/


node* rev_linkedlist_itr(node* head)
{
    node *temp = head;
    node *prev = NULL;
    node *curr = head;
    
    while(curr != NULL){
        temp = temp -> next;
        curr -> next = prev;
        prev = curr;
        curr = temp;
    }
    head = prev;
    return head;
}
