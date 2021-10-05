Longest Increasing Subsequence
Given an array with N elements, you need to find the length of the longest subsequence of a given sequence such that all elements of the subsequence are sorted in strictly increasing order.
Input Format
Line 1 : An integer N 
Line 2 : Elements of arrays separated by spaces
Output Format
Line 1 : Length of longest subsequence
Input Constraints
1 <= n <= 10^3
Sample Input :
6
5 4 11 1 16 8
Sample Output 1 :
3
Sample Output Explanation
Length of longest subsequence is 3 i.e. (5,11,16) or (4,11,16).
Sample Input 2:
3
1 2 2
Sample Output 2 :
2


/******************************************************* SOLUTION ************************************************************************/


#include<bits/stdc++.h>
using namespace std;
int lis(int arr[], int n) {
    int* storage = new int[n];
    storage[0] = 1;
    int ans = 1;
    for(int i = 1; i < n; i++) {
        int max = 1;
        for(int j = i - 1; j >= 0; j--) { 
            if(arr[j] < arr[i]) { 
                int op = storage[j] + 1;
                if(op > max) { 
                    max = op;
                }
            }
        }
        storage[i] = max;
        if(max > ans) {
            ans = max;
        }
    }
    return ans;
}

/*
#include<bits/stdc++.h>
using namespace std;

 int lis(int arr[], int n) {
	int lis[n]; 
   
    lis[0] = 1;    
  
    //Compute optimized LIS values in bottom up manner 
    for (int i = 1; i < n; i++ )  
    { 
        lis[i] = 1; 
        for (int j = 0; j < i; j++ )   
            if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)  
                lis[i] = lis[j] + 1;  
    } 
  
    // Return maximum value in lis[] 
    return *max_element(lis, lis+n); 
 }
 */
