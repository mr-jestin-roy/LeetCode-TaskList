// Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists.

//ITERATIVE APPROACH O(N1+N2) [ INPLACE sc: O(1)]
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
	{
		//iterative
		if (l1 == NULL)
			return l2;
		if (l2 == NULL)
			return l1;
		if (l1->val > l2->val)
			swap(l1, l2);
		ListNode *res = l1;
		while (l1 != NULL && l2 != NULL)
		{
			ListNode *temp = NULL;
			while (l1 != NULL && l1->val <= l2->val)
			{
				temp = l1;
				l1 = l1->next;
			}
			temp->next = l2;
			swap(l1, l2);
		}
		return res;
	}
};

//with space complexity O(n+m)
ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
	if (NULL == l1)
		return l2;
	if (NULL == l2)
		return l1;
	ListNode *dummy = NULL; // head of the list to return
	if (l1->val < l2->val)	// find first element (can use dummy node to put this part inside of the loop)
	{
		dummy = l1;
		l1 = l1->next;
	}
	else
	{
		dummy = l2;
		l2 = l2->next;
	}
	ListNode *p = dummy; // pointer to form new list
	while (l1 && l2)	 // I use && to remove extra IF from the loop
	{
		if (l1->val < l2->val)
		{
			p->next = l1;
			l1 = l1->next;
		}
		else
		{
			p->next = l2;
			l2 = l2->next;
		}
		p = p->next;
	} // add the rest of the tail, done!
	if (l1 != NULL)
		p->next = l1;
	else
		p->next = l2;

	return dummy;
}

//RECURSIVE APPROACH O(N1+N2)
class Solution
{
public:
	ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
	{
		if (l1 == NULL)
		{
			return l2;
		}
		if (l2 == NULL)
		{
			return l1;
		}
		if (l1->val < l2->val)
		{
			l1->next = mergeTwoLists(l1->next, l2);
			return l1;
		}
		else
		{
			l2->next = mergeTwoLists(l1, l2->next);
			return l2;
		}
	}
};

//