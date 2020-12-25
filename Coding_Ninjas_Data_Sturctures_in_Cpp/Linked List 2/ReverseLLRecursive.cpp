Code : Reverse LL (Recursive)
Given a linked list, reverse it using recursion.
You don't need to print the elements, just reverse the LL duplicates and return the head of updated LL.
Input format : Linked list elements (separated by space and terminated by -1)`

Sample Input 1 :
1 2 3 4 5 -1
Sample Output 1 :
5 4 3 2 1


/***************************************************** SOLUTION **********************************************************************/


node *reverse_linked_list_rec(node *head) {
    if(head == NULL || head -> next == NULL)
        return head;
    node* smallhead = reverse_linked_list_rec(head->next);
    head -> next -> next = head;
    head -> next = NULL;
    return smallhead;
}
/*
node *reverse_linked_list_rec(node *head)//solution in video
{
    if(head == NULL || head -> next == NULL) {
		return head;
	}

	node *smallAns = reverse_linked_list_rec(head -> next);

	node *temp = smallAns;
	while(temp -> next != NULL) {
		temp = temp -> next;
	}

	temp -> next = head;
	head -> next = NULL;
	return smallAns;
}

*/
