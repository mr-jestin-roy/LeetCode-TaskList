Code : Maximum Frequency Number
You are given an array of integers that contain numbers in random order. Write a program to find and return the number which occurs the maximum times in the given input.
If two or more elements contend for the maximum frequency, return the element which occurs in the array first.
Sample Input 1 :
13
2 12 2 11 12 2 1 2 2 11 12 2 6 
Sample Output 1 :
2
Sample Input 2 :
3
1 4 5
Sample Output 2 :
1

	
	
/*********************************************** SOLUTION ****************************************************************************/
	
	
//SOLUTION
#include<unordered_map>
int highestFrequency(int *input, int n){	 
    unordered_map<int, int>m; 
    for(int i = 0; i < n; i++){
        int key = input[i];
        if(m.count(key)==0) { 
            m[key] = 1; //initializing frequency value to 1 when key is not already present in hashmap
        }
        else  {
            m[key]++; //incrementing frequency value by 1 when key is already present in hashmap 
        }
    }  
        int maxim = m[ input[ 0 ] ]; 
        int ans = input[0];
        int j = 1;    
        while(j < n) {
            if(m[ input[j] ] > maxim) {
                maxim = m[input[j]];
                ans = input[j];
            }
            j++;
        }
        return ans;
    }
