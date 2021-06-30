// Given the head of a linked list, rotate the list to the right by k places.
class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {
        //edge case
        if (head == NULL || head->next == NULL || k == 0)
            return head;
        //compute length
        ListNode *cur = head;
        int len = 1;
        while (cur->next != NULL)
        {
            cur = cur->next;
            len++;
        }
        //go to till that node
        cur->next = head;
        k = k % len;
        k = len - k;
        while (k--)
            cur = cur->next;
        //make node head & break connection
        head = cur->next;
        cur->next = NULL;

        return head;
    }
};