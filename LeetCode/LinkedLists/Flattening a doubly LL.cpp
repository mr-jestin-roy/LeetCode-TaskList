/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution
{
public:
    Node *flattenHelper(Node *head, Node *rest)
    {
        if (head == NULL)
            return rest;
        head->next = flattenHelper(head->child, flattenHelper(head->next, rest));
        if (head->next != NULL)
        {
            head->next->prev = head;
        }
        head->child = NULL;
        return head;
    }
    Node *flatten(Node *head)
    {
        return flattenHelper(head, NULL);
    }
};