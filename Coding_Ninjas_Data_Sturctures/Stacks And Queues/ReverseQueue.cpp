Reverse Queue
Given a queue of integers, reverse it without help of any explicit stack or queue. You need to change in the given queue itself. Note : No need to return or print the queue.
Sample Input :
4 1 2 3 4     (1 is at front)
Sample Output :
4 3 2 1    (4 is at front)


/****************************************************** SOLUTION *************************************************************************/

SOLUTION:
#include <queue>
void reverseQueue(queue<int> &q) {
	// Write your code here
    if (q.empty()) 
        return; 
  
    // Dequeue current item (from front)   
    int data = q.front(); 
    q.pop(); 
  
    // Reverse remaining queue   
    reverseQueue(q); 
  
    // Enqueue current item (to rear)   
    q.push(data); 
}
