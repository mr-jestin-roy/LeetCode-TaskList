Print Subsets of Array
Given an integer array (of length n), find and print all the subsets of input array.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
Note : The order of subsets are not important. Just print the subsets in different lines.
Input format :
Line 1 : Integer n, Size of array
Line 2 : Array elements (separated by space)
Constraints :
1 <= n <= 15
Sample Input:
3
15 20 12
Sample Output:
[] (this just represents an empty array, don't worry about the square brackets)
12 
20 
20 12 
15 
15 12 
15 20 
15 20 12 


/******************************************************** SOLUTION ******************************************************************/


#include<iostream>
using namespace std;
void printsubsethelper(int input[],int si,int ei, int output[], int m){
    if(si > ei){
        for (int i = 0;i<m;i++)
            cout<<output[i]<<" ";
        cout<<endl;
        return;
    }
    int val = input[si];
    int *newout = new int[m + 1];
    for(int i = 0;i<m;i++)
        newout[i] = output[i];
    newout[m] = val;
    printsubsethelper(input,si+1,ei,output,m);    
    printsubsethelper(input,si+1,ei,newout,m+1);
    return;
}
void printSubsetsOfArray(int input[], int size) {
	// Write your code here
    int *output = new int[0];
    int m = 0;
    return printsubsethelper(input,0,size -1 ,output,m);

}
