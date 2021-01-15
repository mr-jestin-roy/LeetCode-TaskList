removeDuplicates.cpp/****************************************************************

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

Node* eliminate_duplicate(Node* head)
{
	Node *ptr = head, *temp = NULL, *tmp = NULL;

	while (ptr != NULL && ptr->next != NULL)
	{
		temp = ptr->next;
		ptr->next = NULL;

		while (temp != NULL && ptr->data == temp->data)
		{
			tmp = temp;
			temp = temp->next;
			tmp->next = NULL;
			delete(tmp);
		}
		ptr->next = temp;
		ptr = temp;
	}

	return head;
}
