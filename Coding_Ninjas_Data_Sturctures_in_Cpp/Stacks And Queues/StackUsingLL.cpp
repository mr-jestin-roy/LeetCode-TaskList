Code : Stack Using LL
You need to implement a Stack class using linked list.
The data members should be private.
Implement the following public functions :
1. Constructor -
Initialises the data member (i.e. head to null).
2. push :
This function should take one argument of type T and has return type void. This function should insert an element in the stack. Time complexity should be O(1).
3. pop :
This function takes no input arguments and has return type T. This should removes the last element which is entered and return that element as an answer. Time complexity should be O(1).
4. top :
This function takes no input arguments and has return type T. This should return the last element which is entered and return that element as an answer. Time complexity should be O(1).
5. size :
Return the size of stack i.e. count of elements which are present ins stack right now. Time complexity should be O(1).
6. isEmpty :
Checks if the stack is empty or not. Return true or false.
	
	
/****************************************************** SOLUTION **********************************************************************/
	
	
template <typename T>
class Stack {
    Node<T> *head;
    int size;		// number of elements prsent in stack
    
    public :
    
    Stack() {
        head = NULL;
        size = 0;
    }
    
    int getSize() {
        return size;
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    void push(T element) {
        Node<T> *newNode = new Node<T>(element);
		newNode -> next = head;
		head = newNode;
		size++;
        
    }
    
    T pop() {
        // Return 0 if stack is empty. Don't display any other message
        if(isEmpty()) {
			return 0;		
		}
        
		T ans = head -> data;
		Node<T> *temp = head; // to delete he popped data
		head = head -> next;
		delete temp;
		size--;
		return ans;
    }
    
    T top() {
        // Return 0 if stack is empty. Don't display any other message
        if(isEmpty()){
             return 0;   
        }   
        return head -> data;
    }
    
};
