/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
   ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if(NULL == l1) return l2;
    if(NULL == l2) return l1;
    
    ListNode* dummy=NULL;    // head of the list to return
    
    // find first element (can use dummy node to put this part inside of the loop)
    if(l1->val < l2->val)       
        { dummy = l1; l1 = l1->next; }
    else                        
        { dummy = l2; l2 = l2->next; }
    
    ListNode* p = dummy;     // pointer to form new list
    
    // I use && to remove extra IF from the loop
    while(l1 && l2){
        if(l1->val < l2->val)   
            { p->next = l1; l1 = l1->next; }
        else                    
            { p->next = l2; l2 = l2->next; }
        p=p->next;
    }
    
    // add the rest of the tail, done!
    if(l1 != NULL)  
        p->next=l1;
    else    
        p->next=l2;
    
    return dummy;
       }
};