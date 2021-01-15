#include <iostream>
using namespace std;
#include "Node.cpp"

Node* takeInput() {
	int data;
	cin >> data;
	Node *head = NULL;
	while (data != -1) {
		//Need to creae the  node dynamically
		Node *newNode = new Node(data);
		if (head == NULL) {
			head = newNode;
		}
		else {
			Node *temp = head;
			while (temp->next != NULL) {
				temp = temp -> next;
			}
			temp -> next = newNode;
		}

		cin >> data;

	}
	return head;
}
int length(Node *head) {
	Node *temp = head;
	int count = 1;
	if (head->next == NULL) {
		return count;
	}
	else {
		while (temp != NULL) {
			temp = temp->next;
			count++;
		}
		return count;
	}
}

Node* deleteNode(Node *head, int position) {
	int pos = 0;
	Node *ptr = head;
	Node *prev = NULL;

	if (position == 0) {
		head  = head ->next;
		delete (ptr);
	}
	else {

		while (position != pos) {
			++pos;
			prev = ptr;
			ptr = ptr->next;
			//handled the null pointer case here
			if (prev->next == NULL) {
				return head;
			}
		}

		if (ptr != NULL) {
			prev->next = ptr->next;
			delete (ptr);
		}
	}
	return head;
}


Node* insertNode(Node *head, int i, int data) {
	Node *newNode = new Node(data);
	int count = 0;
	Node *temp = head;

	if (i == 0) {
		newNode-> next = head;
		head = newNode;
		return head;
	}
	while (temp != NULL && count <  i - 1) {
		temp = temp->next;
		count++;
	}
	if (temp != NULL) {
		Node *a = temp->next;
		temp->next = newNode;
		newNode->next = a;
	}
	return head;
}





void print(Node *head) {
	Node *temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;

}

int main() {
	Node *head = takeInput();
	print(head);
	int i, data;
	cin >> i >> data;
	head = insertNode(head, i, data);
	print(head);
	/*// Statically
	Node n1(1);
	Node *head = &n1;

	Node n2(2);
	Node n3(3);
	Node n4(4);
	Node n5(5);

	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;

	print(head);
	print(head);

	cout << n1.data << "->" << n2.data << endl;
	*/

}

