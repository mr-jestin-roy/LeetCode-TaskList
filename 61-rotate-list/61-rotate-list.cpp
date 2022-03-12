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
    ListNode* rotateRight(ListNode* head, int k) {
        //edge case
        if(head==NULL || head->next==NULL||k==0) return head;
        //compute length
        ListNode* cur = head;
        int len =1;
        while(cur->next != NULL){
            cur = cur->next;
            len++;
        }
        //go to till that node
        cur->next = head;
        k = k%len;
        k = len -k;
        while(k--)
            cur = cur->next;
        //make node head & break connection
        head = cur->next;
        cur->next = NULL;
        
        return head;
    }
};