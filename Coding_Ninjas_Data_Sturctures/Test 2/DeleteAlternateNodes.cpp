Delete alternate nodes
Given a linked list, delete all alternate nodes in the list. That means given Linked List is -
10 20 30 40 50 60 
you need to delete nodes - 20, 40 and 60
Note : Head of the list will remain same. Don't need to print or return anything.
Input Constraints:
1 <= Length of Linked List <=10^6.
Input format :
Linked list elements (separated by space and terminated by -1)
Output Format :
Updated linked list elements 
Sample Input :
1 2 3 4 5 -1
Sample Output :
1 3 5


/*********************************************** SOLUTION ***************************************************************************/


void delete_alternate_node_LinkedList(Node *head) {
 if (head == NULL)  
        return;  
    Node *prev = head;  
    Node *node = head->next;  
  
    while (prev != NULL && node != NULL)  
    {  
        prev->next = node->next;  
  
        
        free(node);  
        prev = prev->next;  
        if (prev != NULL)  
            node = prev->next;  
    }  
    
}
