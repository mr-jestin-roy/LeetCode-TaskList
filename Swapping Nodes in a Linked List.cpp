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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *left = NULL;
        ListNode *right = NULL;
        ListNode *curr = head;
        while(curr!=NULL){
            right = right==NULL ? NULL : right->next;
            k--;
            if(k == 0){
                left = curr;
                right = head;
            }
            curr = curr->next;
        }
        swap(left->val,right->val);
        return head;
        
    }
};