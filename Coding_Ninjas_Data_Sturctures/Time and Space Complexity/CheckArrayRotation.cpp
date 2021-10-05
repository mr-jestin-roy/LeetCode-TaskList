Check array rotation
Given an integer array, which is sorted (in increasing order) and has been rotated by some number k in clockwise direction. Find and return the k.
Input format :
Line 1 : Integer n (Array Size)
Line 2 : Array elements (separated by space)
Output Format :
Integer k
Constraints :
0 <= n <= 10^7
Sample Input 1:
6
5 6 1 2 3 4
Sample Output 1:
2
Sample Input 2:
5
3 6 8 9 10
Sample Output 2:
0


/********************************************************* SOLUTION *******************************************************************/



int FindSortedArrayRotation(int arr[], int n) {

    int min = arr[0], min_index; 
    for (int i=0; i<n; i++) 
    { 
        if (min > arr[i]) 
        { 
            min = arr[i]; 
            min_index = i; 
        } 
    } 
    return min_index; 
}


// SOLUTION
int FindSortedArrayRotation(int *input, int size) {
    int left = 0;
    int right = size - 1;
    while (left < right) { 
        int mid = left + (right - left) / 2;
        if (input[mid] > input[right]) {
            left = mid + 1; 
        }
        else {
            right = mid;
        }
    }
    return left;
}
