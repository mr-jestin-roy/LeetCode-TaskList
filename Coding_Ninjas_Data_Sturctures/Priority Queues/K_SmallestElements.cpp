Code : K smallest Elements
You are given with an integer k and an array of integers that contain numbers in random order. Write a program to find k smallest numbers from given array. You need to save them in an array and return it.
Time complexity should be O(nlogk) and space complexity should be not more than O(k).
Order of elements in the output is not important.
Input Format :
Line 1 : Size of array (n)
Line 2 : Array elements (separated by space)
Line 3 : Integer k
Output Format :
k smallest elements
Sample Input 1 :
13
2 12 9 16 10 5 3 20 25 11 1 8 6 
4
Sample Output 1 :
5
3
2
1


/************************************************ SOLUTION **************************************************************************/


#include <queue>

vector<int> kSmallest(int *input, int n, int k) {
	
	priority_queue<int>min;
    
    for(int i = 0; i < k; i++){	//PUSH FIRST K ELEMENT IN THE pq
        min.push(input[i]);
        
    }
    for(int i = k; i < n; i++){
        if(min.top() > input[i]){
            
            min.pop();
            min.push(input[i]);
        
        }
    }
    
    while(!min.empty()){
        
        cout<<min.top()<<endl;
        min.pop();
    
    }
}
