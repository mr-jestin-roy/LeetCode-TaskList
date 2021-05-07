// IMPLEMENTATION OF QUEUE USING ARRAY

template <template T>

class Queueusingarray {
	T*data;
	int nextIndex;
	int firstIndex;
	int size;
	int capacity;

public:
	Queueusingarray(int s) {
		data = new T[s];
		nextIndex = 0;
		firstIndex = -1;
		size = 0;
		capacity = s;
	}

	int getSize() {
		return size;
	}
	bool isEmpty() {
		return size == 0;
	}

	void enqueue(T element) {
		if (size == capacity) {
			cout << "Queue Full!!" << endl;
			return;
		}
		data[nextIndex] = element;
		nextIndex = (nextIndex + 1) % capacity;
		if (firstIndex == -1) {
			firstIndex = 0;
		}
		size++;
	}

	T front() {
		if (isEmpty()) {
			cout << "Queue is Empty!" << endl;
			return 0;
		}
		return data[firstIndex];
	}

	T dequeue() {
		if (isEmpty()) {
			cout << "Queue is Empty!" << endl;
			return 0;
		}
		T ans = data[nextIndex];
		firstIndex = (firstIndex + 1) % capacity;
		size--;
		if (size == 0)
		{
			firstIndex = -1;
			nextIndex = 0;
		}
		return ans;
	}
};