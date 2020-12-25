Swap two Node of LL
Given a linked list, i & j, swap the nodes that are present at i & j position in the LL. You need to swap the entire nodes, not just the data.
Indexing starts from 0. You don't need to print the elements, just swap and return the head of updated LL.
Assume i & j given will be within limits. And i can be greater than j also.
Input format :

Line 1 : Linked list elements (separated by space and terminated by -1)

Line 2 : i and j (separated by space)

Sample Input 1 :
3 4 5 2 6 1 9 -1
3 4
Sample Output 1 :
3 4 5 6 2 1 9
Sample Input 2 :
3 4 5 2 6 1 9 -1
2 4
Sample Output 2 :
3 4 6 2 5 1 9



/********************************************************** SOLUTION ****************************************************************/

//SOLUTION
node* swap_nodes(node *head,int i,int j) {
    node *temp = head, *prev = NULL; 
    node *node1 = NULL, *node2 = NULL, *node1_prev = NULL, *node2_prev = NULL;
    int pos = 0;
    while(temp != NULL) {
        if(pos == i) {
            node1_prev = prev; 
            node1 = temp;
        }
        else if(pos == j) {
            node2_prev = prev; node2 = temp;
        }
        prev = temp;
        temp = temp -> next; pos++; 
    }
    if(node1_prev != NULL) {
        node1_prev -> next = node2;
    }
    else { 
        head = node2;
    }
    if(node2_prev != NULL) { 
        node2_prev -> next = node1; 
    }
    else {
        head = node1;
    }
    node *temp1 = node2 -> next;
    node2 -> next = node1 -> next; 
    node1 -> next = temp1;
    return head;
}
/*

node* swap_nodes(node *head,int i,int j)
{
        node *temp = head;
    node *pre = NULL;
    node *p1 = NULL;
    node *p2 = NULL;
    node *c1 = head;
    node *c2 = head;
    int x=0;
    while(temp != NULL){
        if(x == i){
            p1 = pre;
            c1 = temp;
        }
        else if(x == j){
            p2 = pre;
            c2 = temp;
        }
        pre = temp;
        temp = temp->next;
        x++;
    }
    if(p1 != NULL)
        p1->next = c2;
    else
        head = c2;
    if(p2 != NULL)
        p2->next = c1;
    else
        head = c1;
    node *TEMP = c2->next;
    c2->next = c1->next;
    c1->next = TEMP;
    return head;

}*/
