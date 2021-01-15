/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
	if (head1 == NULL) {
		return head2;
	}
	if (head2 == NULL) {
		return head1;
	}
	if (head1->data < head2->data) {
		head->next = mergeTwoSortedLinkedLists(head1->next, head2);
		return head1;
	}
	else {
		head2->next = mergeTwoSortedLinkedLists(head1, head2->next);
		return head2;
	}
}