Code : K largest elements
Send Feedback
You are given with an integer k and an array of integers that contain numbers in random order. Write a program to find k largest numbers from given array. You need to save them in an array and return it.
Time complexity should be O(nlogk) and space complexity should be not more than O(k).
Order of elements in the output is not important.
Input Format :
Line 1 : Size of array (n)
Line 2 : Array elements (separated by space)
Line 3 : Integer k
Output Format :
k largest elements
Sample Input :
13
2 12 9 16 10 5 3 20 25 11 1 8 6 
4
Sample Output :
12
16
20
25


/************************************************ SOLUTION **************************************************************************/


#include<queue>

vector<int> kLargest(int input[], int n, int k){
    
    priority_queue<int,vector<int>,greater<int>>max;
    
    for(int i=0;i<k;i++){
        max.push(input[i]);
        
    }
    for(int i=k;i<n;i++){
        if(max.top()<input[i]){
            max.pop();
            max.push(input[i]);
        }
    }
    while(!max.empty()){
        cout<<max.top()<<endl;
        max.pop();
    }
}
