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
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL)
            return NULL;

        ListNode *fakeHead = new ListNode();
        fakeHead->next = head;
        ListNode *prev = fakeHead;
        ListNode *curr = head;
        while (curr != NULL)
        {
            if (curr->next != NULL && curr->val == curr->next->val)
            {
                while (curr->next != NULL && curr->val == curr->next->val)
                {
                    curr = curr->next;
                }
                //skip all duplicates
                prev->next = curr->next;
            }
            else
            {
                prev = prev->next;
            }
            curr = curr->next;
        }
        return fakeHead->next;
    }
};