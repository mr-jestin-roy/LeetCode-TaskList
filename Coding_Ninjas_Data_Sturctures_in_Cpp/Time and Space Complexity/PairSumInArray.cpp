Pair sum in array
Given a random integer array A and a number x. Find and print the pair of elements in the array which sum to x.
Array A can contain duplicate elements.
While printing a pair, print the smaller element first.
That is, if a valid pair is (6, 5) print "5 6". There is no constraint that out of 5 pairs which have to be printed in 1st line. You can print pairs in any order, just be careful about the order of elements in a pair.
Input format :
Line 1 : Integer N (Array size)
Line 2 : Array elements (separated by space)
Line 3 : Integer x
Output format :
Line 1 : Pair 1 elements (separated by space)
Line 2 : Pair 2 elements (separated by space)
Line 3 : and so on
Constraints :
1 <= N <= 1000
1 <= x <= 100
Sample Input:
9
1 3 6 2 5 4 3 2 4
7
Sample Output :
1 6
3 4
3 4
2 5
2 5
3 4
3 4



/********************************************************* SOLUTION *******************************************************************/


#include <bits/stdc++.h> 
using namespace std;
void pairSum(int arr[], int n, int sum) {
    
    int i,j;
   for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n;j++){
            if(i!=j){
                if((arr[i] + arr[j]) == sum){
                    if(arr[i] < arr[j]){
                        cout << arr[i]<<" "<< arr[j] << endl;
                       
                    }
                    else{
                        cout <<arr[j]<<" "<< arr[i] << endl;
                    }
                }
            }
        }
    }
}

/*  // Solution
#include <algorithm> 
void pairSum(int arr[], int size, int num) { 
    sort(arr, arr + size);
    int start = 0;
    int end = size - 1;
    while(start < end) {
        if(arr[start] + arr[end] == num) {
            if(arr[start] == arr[end]) {
                int count = end - start + 1; 
                int n = count - 1;
                int totalCount = ((n) * (n + 1)) / 2;
                while(totalCount > 0) { 
                    cout << arr[start] << " " << arr[end] << endl;
                    totalCount--; 
                }
                start = end; 
            }
            else {
                int countStart = 0, countEnd = 0;
                int temp = arr[start], i = start;
                while(arr[i] == temp && i < end){
                    i++;
                    countStart++;
                }
                temp = arr[end];
                int j = end;
                while(arr[j] == temp && j > start){
                    j--;
                    countEnd++;
                }
                start = i;
                end = j;
                int totalTimes = countStart * countEnd;
                while(totalTimes > 0) {
                    cout << arr[start-1] << " " << arr[end+1] << endl;
                    totalTimes--;
                }
            }
        }
        else if(arr[start] + arr[end] < num)
            start++;
        else 
            end--; 
    }
}
*/
