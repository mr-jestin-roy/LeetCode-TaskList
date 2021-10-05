Code: Knapsack (Memoization and DP)
A thief robbing a store and can carry a maximal weight of W into his knapsack. There are N items and ith item weigh wi and is of value vi. What is the maximum value V, that thief can take ?
Space complexity should be O(W).
Input Format :
Line 1 : N i.e. number of items
Line 2 : N Integers i.e. weights of items separated by space
Line 3 : N Integers i.e. values of items separated by space
Line 4 : Integer W i.e. maximum weight thief can carry
Output Format :
Line 1 : Maximum value V
Constraints
1 <= N <= 10^4
1<= wi <= 100
1 <= vi <= 100
Sample Input 1 :
4
1 2 4 5
5 4 8 6
5
Sample Output :
13


/******************************************************* SOLUTION ************************************************************************/


#include<cstring>
using namespace std;
int knapsack(int* wt, int* val, int n, int W){
    // matrix to store final result 
    int mat[2][W+1];
    memset(mat, 0, sizeof(mat));
    // iterate through all items
    int i = 0;
    while (i < n)// one by one traverse each element
    {
        int j = 0;// traverse all wieghts
        j <= W;
        // if i is odd that mean till now we have odd
        // number of elements so we store result in 1th
        // indexed row
        if (i%2!=0) {
            while (++j <= W)    // check for each value 
            { 
                if (wt[i] <= j) // include element 
                    mat[1][j] = max(val[i] + mat[0][j-wt[i]], mat[0][j] ); 
                else // exclude element
                    mat[1][j] = mat[0][j]; 
            }
        }
        // if i is even that mean till now we have even number // of elements so we store result in 0th indexed row
        else {
            while(++j <= W) {
                if (wt[i] <= j) 
                    mat[0][j] = max(val[i] + mat[1][j-wt[i]], mat[1][j]); 
                else 
                    mat[0][j] = mat[1][j]; 
            }
        }
        i++;
    } // Return mat[0][W] if n is odd, else mat[1][W] 
    return (n%2 != 0)? mat[0][W] : mat[1][W];
}
