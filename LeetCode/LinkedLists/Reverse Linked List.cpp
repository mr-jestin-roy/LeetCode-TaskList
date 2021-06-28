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
//ITERATIVE APPROACH O(N)
class Solution
{
public:
	ListNode *reverseList(ListNode *head)
	{
		ListNode *newHead = NULL;
		while (head != NULL)
		{
			ListNode *next = head->next;
			head->next = newHead;
			newHead = head;
			head = next;
		}
		return newHead;
	}
};

//recursive solution take time
class Solution
{
public:
	ListNode *reverseList(ListNode *head)
	{
		if (head == NULL || head->next == NULL)
		{
			return head;
		}
		ListNode *smallAns = reverseList(head->next);
		ListNode *tail = head->next;
		tail->next = head;
		head->next = NULL;

		return smallAns;
	}
};