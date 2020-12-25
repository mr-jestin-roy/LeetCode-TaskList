Longest subset zero sum
Given an array consisting of positive and negative integers, find the length of the longest subarray whose sum is zero.
NOTE: You have to return the length of longest subarray .
Input Format :
Line 1 : Contains an integer N i.e. size of array

Line 2 : Contains N elements of the array, separated by spaces
Output Format
 Line 1 : Length of longest subarray 
Constraints:
0 <= N <= 10^8
Sample Input :
10 
 95 -97 -387 -435 -5 -70 897 127 23 284
Sample Output :
5


/*************************************************************** SOLUTION ****************************************************************/


#include<unordered_map>
using namespace std;
int lengthOfLongestSubsetWithZeroSum(int* arr, int size){
    unordered_map<int,int> freq;
    for(int i=1;i<size;i++) {
        arr[i]+=arr[i-1]; 
    }
    int m=0;
    for(int i=0;i<size;i++){ 
        if(arr[i]==0){ 
            if(m<i+1){
                m=i+1;
            }
        }
        else if(freq.count(arr[i])>0){
            if(m<i-freq[arr[i]]){
                m=i-freq[arr[i]];
            }
        }
        else{
            freq[arr[i]]=i;
        }
    }
    return m;
}
