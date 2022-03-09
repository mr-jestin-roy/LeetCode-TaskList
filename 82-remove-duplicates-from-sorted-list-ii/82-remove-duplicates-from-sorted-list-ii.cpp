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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return NULL;
        ListNode* dummy = new ListNode(0); //dummy linked list
        dummy->next = head;
        ListNode* cur = dummy;
        int duplicate;
        while (cur->next && cur->next->next) {//traverse the LL
            if (cur->next->val == cur->next->next->val) { ///if duplicates are found
                duplicate = cur->next->val;
                while (cur->next && cur->next->val == duplicate) {
                    cur->next = cur->next->next; //jump till you skip duplicates
                }
            }
            else {
                cur = cur->next;  //if dup not found, continue
            }
        }
        return dummy->next; //return dummy head
    }
};