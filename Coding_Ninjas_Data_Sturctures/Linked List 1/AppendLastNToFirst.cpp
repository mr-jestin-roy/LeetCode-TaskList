AppendLastNToFirst
Given a linked list and an integer n, append the last n elements of the LL to front.
Indexing starts from 0. You don't need to print the elements, just update the elements and return the head of updated LL.
Assume given n will be smaller than length of LL.
Input format :

Line 1 : Linked list elements (separated by space and terminated by -1)`

Sample Input 1 :
1 2 3 4 5 -1
3
Sample Output 1 :
3 4 5 1 2



/***************************************************** SOLUTION **********************************************************************/


node* append_LinkedList(node* head,int n)
{
    node *slow=head, *fast=head, *ptr=head->next;   //important
    while(n>-1) {
        n--;
        if(fast==NULL) { 
            fast=head;
        } 
        fast=fast->next;
    }
    while(fast!=NULL) {
        ptr=fast;
        fast=fast->next;
        slow=slow->next;
    }
    fast=slow->next;
    slow->next=NULL;
    if(fast!=NULL) {
        while(ptr->next!=NULL) ptr=ptr->next;
        ptr->next=head;
        head=fast;
    }
    return head;
}
/*
node* append_LinkedList(node* head,int n) { 
    node* temp=head,*t=head;
    int i = -n;
    while(temp->next!=NULL) {
        if(i >= 0) 
            t = t -> next;
            temp=temp -> next;
            i++;
    }
    temp -> next = head;
    head = t -> next;
    t -> next = NULL;
    return head;
}
*/
