Eliminate duplicates from LL
Given a sorted linked list (elements are sorted in ascending order). Eliminate duplicates from the given LL, such that output LL contains only unique elements.
You don't need to print the elements, just remove duplicates and return the head of updated LL.
Input format : Linked list elements (separated by space and terminated by -1)

Sample Input 1 :
1 2 3 3 3 4 4 5 5 5 7 -1
Sample Output 1 :
1 2 3 4 5 7


/***************************************************** SOLUTION **********************************************************************/


node* eliminate_duplicate(node* head)
{
    node *ptr = head,*temp=NULL,*tmp=NULL;
    
    while(ptr!=NULL && ptr->next!=NULL)
    {
        temp = ptr->next;
        ptr->next=NULL;
        
        while(temp!=NULL && ptr->data == temp->data)
        {
            tmp=temp;
            temp=temp->next;
            tmp->next=NULL;
            delete(tmp);
        }
        ptr->next = temp;
        ptr = temp;
    }
    
    return head;
}
