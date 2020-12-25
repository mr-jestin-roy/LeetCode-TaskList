Duplicate in array
Given an array of integers of size n which contains numbers from 0 to n - 2. Each number is present at least once. That is, if n = 5, numbers from 0 to 3 is present in the given array at least once and one number is present twice. You need to find and return that duplicate number present in the array.
Assume, duplicate number is always present in the array.
Input format :
Line 1 : Size of input array
Line 2 : Array elements (separated by space)
Output Format :
Duplicate element
Constraints :
1 <= n <= 10^6
Sample Input:
9
0 7 2 5 4 7 1 3 6
Sample Output:
7



/******************************************* SOLUTION *****************************************************************************/


// arr - input array
// size - size of array

int MissingNumber(int arr[], int size){
    int *count = new int[sizeof(int)*(size - 2)];  
    int i;  
          
   
    for(i = 0; i < size; i++)  
    {  
        if(count[arr[i]] == 1)  
            return arr[i] ;  
        else
            count[arr[i]]++;  
    }  

}
/*  //SOLUTION CODE
int MissingNumber(int *input, int size){ 
    // Sum of all elements in the array
    long long sum = 0;
    for(int i = 0; i < size; i++) 
        sum += input[i]; 
    int n = size;
    // Sum of all natural numbers from 0 to N - 2, as array contains till N - 2 
    int sumOfNaturalNumbers = ((n - 1) * (n - 2)) / 2;
    // Subtract them to get the missing number 
    return sum - sumOfNaturalNumbers ; 
}
*/
