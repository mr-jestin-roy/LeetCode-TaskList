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

// TORTOISE METHOD O(N/2)
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

//BRUTE FORCE APPROACH O(N) + O(N/2)

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        vector<ListNode *> a = {head};
        while (a.back()->next != NULL)
        {
            a.push_back(a.back()->next);
        }
        return a[a.size() / 2];
    }
};