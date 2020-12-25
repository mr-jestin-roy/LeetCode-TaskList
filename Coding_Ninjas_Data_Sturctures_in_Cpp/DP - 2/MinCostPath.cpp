Code : Min Cost Path
Given an integer matrix of size m*n, you need to find out the value of minimum cost to reach from the cell (0, 0) to (m-1, n-1).
From a cell (i, j), you can move in three directions : (i+1, j), (i, j+1) and (i+1, j+1).
Cost of a path is defined as the sum of values of each cell through which path passes.
Input Format :
Line 1 : Two integers, m and n
Next m lines : n integers of each row (separated by space)
Output Format :
Minimum cost
Constraints :
1 <= m, n <= 20
Sample Input 1 :
3 4
3 4 1 2
2 1 8 9
4 7 8 1
Sample Output 1 :
13
	
	
/******************************************************* SOLUTION ************************************************************************/
	
	
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minCostPath(int **input, int m, int n, int i, int j) {
	// Base case
	if(i == m- 1 && j == n- 1) {
		return input[i][j];
	}

	if(i >= m || j >= n) {
		return INT_MAX;
	}

	// Recursive calls
	int x = minCostPath(input, m, n, i, j+1);
	int y = minCostPath(input, m, n, i+1, j+1);
	int z = minCostPath(input, m, n, i+1, j);

	// Small Calculation
	int ans = min(x, min(y, z)) + input[i][j];
	return ans;
}
int minCostPath(int **input, int m, int n) {
    return minCostPath(input, m, n, 0, 0);    
}
