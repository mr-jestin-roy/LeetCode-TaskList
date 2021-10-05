Print reverse LinkedList
Print a given linked list in reverse order. You need to print the tail first and head last. You can’t change any pointer in the linked list, just print it in reverse order.
Input format : Linked List elements (separated by space and terminated by -1)

Output format : Linked List elements in reverse order (separated by space)

Sample Input 1 :
1 2 3 4 5 -1
Sample Output 1 :
5 4 3 2 1
Sample Input 2 :
1 2 3 -1
Sample Output 2 :
3 2 1


/***************************************************** SOLUTION **********************************************************************/


void print_linkedlist_spl(node*head)
{
    if (head == NULL)  
    return;  
  
    // print the list after head node  
    print_linkedlist_spl(head->next);  
  
    // After everything else is printed, print head  
    cout << head->data << " ";  
}
