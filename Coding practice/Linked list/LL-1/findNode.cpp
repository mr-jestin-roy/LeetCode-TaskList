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

int findNode(Node *head, int n)
{
	Node *temp = head;
	int count = 0;
	while (temp != NULL && n != temp->data) {
		temp = temp->next;
		count++;

	}
	if (temp == NULL) {
		return -1;
	}
	return count;
}