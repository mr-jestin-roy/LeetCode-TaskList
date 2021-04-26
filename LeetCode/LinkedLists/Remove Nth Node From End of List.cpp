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
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode* temp = head;
		int len = 0, i = 1;
		while (temp) {
			temp = temp->next;
			len++;
		}
		if (len == n)
			return head->next;
		for (temp = head; i < len - n; i++)
			temp = temp->next;
		temp->next = temp->next->next;
		return head;
	}
};