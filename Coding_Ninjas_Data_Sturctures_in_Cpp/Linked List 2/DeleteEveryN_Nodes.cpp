Delete every N nodes
Given a linked list and two integers M and N. Traverse the linked list such that you retain M nodes then delete next N nodes, continue the same until end of the linked list. That is, in the given linked list you need to delete N nodes after every M nodes.
Input format :

Line 1 : Linked list elements (separated by space and terminated by -1)

Line 2 : M

Line 3 : N

Sample Input 1 :
1 2 3 4 5 6 7 8 -1
2
2
Sample Output 1 :
1 2 5 6
Sample Input 2 :
1 2 3 4 5 6 7 8 -1
2
3
Sample Output 2 :
1 2 6 7



/********************************************************** SOLUTION ****************************************************************/


node* skipMdeleteN(node  *head, int M, int N) {
    // Write your code here
    if(M==0)
        return NULL;
    node *curr = head, *t;  
    int count;  
    // The main loop that traverses 
    // through the whole list  
    while (curr != NULL)  
    {  
        // Skip M nodes  
        for (count = 1; count < M &&  curr!= NULL; count++)  
            curr = curr->next;  
        // If we reached end of list, then return  
        if (curr == NULL)  
            return head;  
        // Start from next node and delete N nodes  
        t = curr -> next;  
        for (count = 1; count <= N && t != NULL; count++)  
        {  
            node *temp = t;  
            t = t -> next;  
            free(temp);  
        }  
        // Link the previous list with remaining nodes  
        curr -> next = t;  
        // Set current pointer for next iteration  
        curr = t;  
    }
    return head;
}
