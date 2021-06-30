class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) return NULL;
        ListNode* a = headA;
        ListNode* b = headB;
        
        while(a!=b){
            a= a==NULL ? headB:a->next;
            b= b==NULL ? headA:b->next;
        }
        //if there are no intersection then both a & b will be null after 2nd iterations
        return a;
    }
};