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


Node *appendLastNToFirst(Node *head, int n)
{
	//Write your code here
	if (head == NULL)
		return NULL;
	int l = 0;
	Node* t = head;
	while (t->next != NULL)
	{
		l++;
		t = t->next;
	}
	l++;
	Node* a = head;
	t->next = head;
	while (l - n > 1)
	{
		a = a->next;
		l--;
	}
	t = a->next;
	a->next = NULL;
	return t;

}