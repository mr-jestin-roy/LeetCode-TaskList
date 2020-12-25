Code : Max Priority Queue
Implement the class for Max Priority Queue which includes following functions -
1. getSize -
Return the size of priority queue i.e. number of elements present in the priority queue.
2. isEmpty -
Check if priority queue is empty or not. Return true or false accordingly.
3. insert -
Given an element, insert that element in the priority queue at the correct position.
4. getMax -
Return the maximum element present in the priority queue without deleting. Return -Infinity if priority queue is empty.
5. removeMax -
Delete and return the maximum element present in the priority queue. Return -Infinity if priority queue is empty.
Note : main function is given for your reference which we are using internally to test the class.


/************************************************ SOLUTION **************************************************************************/


#include<vector>
class PriorityQueue {
    vector<int> pq;
    public:
    bool isEmpty(){
        return pq.size()==0;
    }
    int getMax()
    {
        if(isEmpty())
        {
            return 0;
        }
        return pq[0];
    }
    int getSize(){
        return pq.size();
    }
    void insert(int element)
    {
        pq.push_back(element);
        int childindex=pq.size()-1;
        while(childindex>0)
        {
            int parentindex=(childindex-1)/2;
            if(pq[parentindex]<pq[childindex])
            {
                int temp=pq[parentindex];
                pq[parentindex]=pq[childindex];
                pq[childindex]=temp;    
            }
            else
            {
                break;
            }
            childindex=parentindex;
        }
    }
    int removeMax()
    {
         if(isEmpty())
        {
            return 0;
        }
        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
        int parentindex = 0;
		int leftchildindex = 2 * parentindex + 1;
		int rightchildindex = 2 * parentindex + 2;
        while(leftchildindex<pq.size())
        {
            int maxNode=parentindex;
    	        if(pq[leftchildindex]>pq[maxNode])
            {
                maxNode=leftchildindex;
            }
            if(rightchildindex < pq.size() && pq[rightchildindex] > pq[maxNode]) {
				maxNode = rightchildindex;
			}
            if(maxNode==parentindex)
            {
                break;
            }
            int temp = pq[maxNode];
			pq[maxNode] = pq[parentindex];
			pq[parentindex] = temp;
		
			parentindex = maxNode;
			leftchildindex = 2 * parentindex + 1;
			rightchildindex = 2 * parentindex + 2;
        }
        return ans;
    }
};
