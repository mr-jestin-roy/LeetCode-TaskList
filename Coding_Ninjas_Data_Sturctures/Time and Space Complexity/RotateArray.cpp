Rotate array
Given a random integer array of size n, write a function that rotates the given array by d elements (towards left)
Change in the input array itself. You don't need to return or print elements.
Input format :
Line 1 : Integer n (Array Size)
Line 2 : Array elements (separated by space)
Line 3 : Integer d
Output Format :
Updated array elements in a single line (separated by space)
Constraints :
0 <= N <= 10^7
0 <= d <= N
Sample Input 1:
7
1 2 3 4 5 6 7
2
Sample Output 1:
3 4 5 6 7 1 2
Sample Input 2:
7
1 2 3 4 5 6 7
0
Sample Output 2:
1 2 3 4 5 6 7


/********************************************************* SOLUTION *******************************************************************/


void leftRotatebyOne(int arr[], int n) 
{ 
    int temp = arr[0], i; 
    for (i = 0; i < n - 1; i++) 
        arr[i] = arr[i + 1]; 
  
    arr[i] = temp; 
} 
void Rotate(int arr[], int d, int n) {
    
    for (int i = 0; i < d; i++) 
        leftRotatebyOne(arr, n); 
}	


// Solution
void swapElements(int *input, int i, int j) {
    int temp = input[i];
    input[i] = input[j];
    input[j] = temp;
}
void reverse(int *input, int start, int end) { 
    int i = start, j = end;
    while(i < j) {
        swapElements(input, i, j);
        i++;
        j--;
    }
}
void Rotate(int *input, int d, int n) {
    if(d >= n && n != 0) { 
        d = d % n;
    }
    else if (n == 0) {
        return;
    }
    reverse(input, 0, n - 1);
    reverse(input, 0, n - d - 1);
    reverse(input, n - d, n - 1);
}
