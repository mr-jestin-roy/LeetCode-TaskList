#include <climits>
// // Functions of stack:
// // insert => push()	inserts element on  the top of the stack
// // delete => pop()	deletes the topmost element
// // top() 	reads the topmost element
// // size()	returns the size of the current stack / returns the nextIndex value
// // isEmpty()		returns true or false

// Stack follows LIFO method

class stackUsingArray {
	int *data;
	int nextIndex;
	int capacity;

public:
	stackUsingArray() {
		data = new int[4];
		nextIndex = 0;
		capacity = 4;
	}

	//retuurn the number of elements present in my stack
	int size() {
		return nextIndex;
	}

	bool isEmpty() {
		// if(nextIndex == 0){
		// 	return true;
		// }
		// else{
		// 	return false;
		// }
		// OR we can write
		return nextIndex == 0;
	}

	//insert element
	void push(int element) {
		// we can remove costraint of size
		//from our stack by using dynamic array.
		if (nextIndex == capacity) {
			int *newData = new int[2 * capacity];
			for (int i = 0; i < capacity; i++) {
				newData[i] = data[i];
			}
			capacity *= 2;
			delete [] data;
			data = newData;
			// cout << "Stack is full" << endl;
			// return ;
		}
		data[nextIndex] = element;
		nextIndex++;
	}

	//delete the element
	int pop() {
		if (isEmpty()) {
			cout << "Stack is Empty" << endl;
			return INT_MIN;
		}
		nextIndex--;
		return data[nextIndex];
	}

	int top() {
		if (isEmpty()) {
			return INT_MIN;
		}
		return data[nextIndex - 1];
	}
};
