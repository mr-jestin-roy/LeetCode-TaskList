Bubble Sort (Iterative) LinkedList
Sort a given linked list using Bubble Sort (iteratively). While sorting, you need to swap the entire nodes, not just the data.
You don't need to print the elements, just sort the elements and return the head of updated LL.
Input format : Linked list elements (separated by space and terminated by -1)`

Sample Input 1 :
1 4 5 2 -1
Sample Output 1 :
1 2 4 5


/********************************************************** SOLUTION ****************************************************************/


int length(node* head) {
    if(head==NULL) {
        return 0;
    }
    node* temp=head;
    int size=1+length(temp->next);
    return size;
}
node* bubble_sort_LinkedList_itr(node* head) {
    for(int i=0;length(head)>i;i++) { 
        node* prev=NULL,*curr=head;
        while(curr->next!=NULL) {
            if(curr->data>curr->next->data) {
                if(prev!=NULL) {
                    node *temp = curr -> next -> next;
                    curr -> next -> next = curr;
                    prev -> next = curr -> next;
                    curr -> next = temp;
                    prev = prev -> next;
                } 
                else{
                    head=curr->next;
                    curr->next=head->next;
                    head->next=curr;
                    prev=head;
                }
            }
            else { 
                prev=curr;
                curr=curr->next;
            }
        }
    }
    return head;
}
/*


node* bubble_sort_LinkedList_itr(node* head)
{
    node *temp = head;
    int count = 0;
    
    //count length of LL
    while(temp != NULL){
        temp = temp -> next;
        count++;
    }
    int i = 0;
    while(i < count){
        temp = head;
        
        //check greater node
        while(temp != NULL && temp -> next != NULL){
            if(temp -> data > temp -> next -> data){
                swap(temp -> data, temp -> next -> data);
            }
            temp = temp -> next;
        }
        i++;
    }
    return head;
}
*/
