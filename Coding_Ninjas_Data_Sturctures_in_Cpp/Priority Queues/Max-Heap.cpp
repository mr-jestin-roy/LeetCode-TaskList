Check Max-Heap
Given an array of integers, check whether it represents max-heap or not.
Return true or false.
Input Format :
Line 1 : An integer N i.e. size of the array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
true if it represents max-heap and false if it is not a max-heap
Constraints :
1 <= N <= 10^5
1 <= Ai <= 10^5


/************************************************ SOLUTION **************************************************************************/


bool checkMaxHeap(int arr[], int n){
    for (int i=0; i<=(n-2)/2; i++) 
    { 
        // If left child is greater, return false 
        if (arr[2*i +1] > arr[i]) 
                return false; 
  
        // If right child is greater, return false 
        if (2*i+2 < n && arr[2*i+2] > arr[i]) 
                return false; 
    } 
    return true; 
}
