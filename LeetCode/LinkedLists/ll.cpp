class Node {
public:
	int data;
	Node *next;

	Node(int data) {
		this->data = data;
		next = NULL;
	}
};

void print(Node *head) {
	Node *temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

Node *takeInput() {
	int data;
	cin >> data;
	Node *head = NULL;
	Node *tail = NULL;
	while (data != -1) {					//-1 is used for terminating
		Node *newNode = new Node(data);
		if (head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail = newNode;
			// OR
			// tail->next = newNode;
			// tail = tail->next;
		}
		cin >> data;
	}
	return head;
}

Node* insertNode(Node *head, int i, int data) {
	Node *newNode = new Node(data);
	int count = 0;
	Node *temp = head;
	if (i == 0) {							//Case 1: Insert node at the last
		newNode -> next = head;
		head = newNode;
		return head;
	}
	​										//Case 2: Insert node at the beginning
	while (temp != NULL && count < i - 1) {
		​
		temp = temp -> next;
		count++;
	}
	//Case 3: Insert node anywhere in the middle
	if (temp != NULL) {
		Node *a = temp -> next;
		temp -> next = newNode;
		newNode -> next = a;
	}
	return head;
//Returns the new head pointer after insertion
}