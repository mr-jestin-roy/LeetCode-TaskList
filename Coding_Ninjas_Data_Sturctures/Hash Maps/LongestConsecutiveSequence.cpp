Longest consecutive Sequence
You are given with an array of integers that contain numbers in random order. Write a program to find the longest possible sequence of consecutive numbers using the numbers from given array.
You need to return the output array which contains consecutive elements. Order of elements in the output is not important.
Best solution takes O(n) time.
If two sequences are of equal length then return the sequence starting with the number whose occurrence is earlier in the array.
Input Format :
Line 1 : Integer n, Size of array
Line 2 : Array elements (separated by space)
Constraints :
0 <= n <= 10^8
Sample Input 1 :
13
2 12 9 16 10 5 3 20 25 11 1 8 6 
Sample Output 1 :
8 
9 
10 
11 
12
Sample Input 2 :
7
3 7 2 1 9 8 1
Sample Output 2 :
7
8
9
Explanation: Sequence should be of consecutive numbers. Here we have 2 sequences with same length i.e. [1, 2, 3] and [7, 8, 9], but output should be [7, 8, 9] because the starting point of [7, 8, 9] comes first in input array.
Sample Input 3 :
7
15 24 23 12 19 11 16
Sample Output 3 :
15 
16


/*************************************************************** SOLUTION ****************************************************************/


#include <vector>
using namespace std;
#include<unordered_map>
#include<bits/stdc++.h>
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n){
	unordered_map<int,bool> checkMap;
    unordered_map<int,int> indexMap;
    if(n==0){
        vector<int> v1;
        v1.push_back(0);
        return v1;
    }
    int maxLength=0;
    int manyElement=0;
    int curIndex=0;
    for(int i=0;i<n;i++){
        checkMap[arr[i]]=true;
        if(!indexMap.count(arr[i])){
        indexMap[arr[i]]=i;
        }
    }
    for(int i=0;i<n;i++){
        int currElement=arr[i];
        int curLength=1;
        int curCopy=currElement;
        if(checkMap.count(currElement) && checkMap[currElement]==true){
            while(1){
            curCopy=curCopy+1;
            if(checkMap.count(currElement) && checkMap[curCopy]==true){
                curLength++;
                checkMap[curCopy]=false;
            }
            else{
                break;
            }
        }
        curCopy=currElement;
        int curStartElement=arr[i];
        while(1){
            curCopy=curCopy-1;
            if(checkMap.count(curCopy) && checkMap[curCopy]==true){
                curLength++;
                checkMap[curCopy]=false;
                curStartElement=curCopy;
            }
            else{
                break;
            }
        }
        if(curLength > maxLength){
            maxLength=curLength;
            manyElement=curStartElement;
            curIndex=indexMap[curStartElement];           
        }
        else if(curLength==maxLength){
            maxLength=curLength;
            int rightNowIndex=indexMap[curStartElement];
            if(rightNowIndex < curIndex){
                manyElement=curStartElement;
            }
        }
        }
        checkMap[currElement]=false;
    }
    vector<int> v1;
    while(maxLength!=0){
        v1.push_back(manyElement);
        manyElement++;
        maxLength--;
    }
    return v1;
}
