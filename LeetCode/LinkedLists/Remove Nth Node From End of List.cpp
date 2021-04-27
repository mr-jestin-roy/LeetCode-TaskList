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
// Solution - I (One-Pointer, Two-Pass)
// This approach is very intuitive and easy to get.

//    We just iterate in the first-pass to find the length of the linked list - len.

//    In the next pass, iterate len - n - 1 nodes from start and delete the next node (which would be nth node from end).
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

// OR slower solution
// Solution II (Two-Pointer, One-Pass)

// We are required to remove the nth node from the end of list. For this, we need to traverse N - n nodes from the start of the list, where N is the length of linked list. We can do this in one-pass as follows -

//     Let's assign two pointers - fast and slow to head. We will first iterate for n nodes from start using the fast pointer.

//     Now, between the fast and slow pointers, there is a gap of n nodes. Now, just Iterate and increment both the pointers till fast reaches the last node. The gap between fast and slow is still of n nodes, meaning that slow is nth node from the last node (which currently is fast).

class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode* fast = head;
		ListNode* slow = head;
		while (n--) { fast = fast->next;}

		if (!fast) return head->next;

		while (fast->next) {
			fast = fast->next;
			slow = slow->next;
		}
		slow->next = slow->next->next;

		return head;
	}
};