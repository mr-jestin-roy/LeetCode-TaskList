Print Subset Sum to K
Given an array A and an integer K, print all subsets of A which sum to K.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
Note : The order of subsets are not important. Just print them in different lines.
Input format :
Line 1 : Size of input array
Line 2 : Array elements separated by space
Line 3 : K 
Sample Input:
9 
5 12 3 17 1 18 15 3 17 
6
Sample Output:
3 3
5 1


/******************************************************** SOLUTION ******************************************************************/


void subsetSumToKHelper(int input[], int startIndex, int size, int output[], int oSize, int k) {
    if(startIndex == size) { 
        if(k == 0) {
            for(int i = 0; i < oSize; i++) {
                cout << output[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    int smallOutout1[1000], smallOutput2[1000], smallSize1 = 0, smallSize2 = 0;
    subsetSumToKHelper(input, startIndex+1, size, output, oSize, k);
    if(k > 0) {
        int i;
        for(i = 0; i < oSize; i++) {
            smallOutput2[i] = output[i];
        }
        smallOutput2[i] = input[startIndex];
        subsetSumToKHelper(input, startIndex+1, size, smallOutput2, oSize+1, k-input[startIndex]);
    }
}
void printSubsetSumToK(int input[], int size, int k) { 
    int output[1000]; 
    subsetSumToKHelper(input, 0, size, output, 0, k);
}
