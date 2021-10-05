Code : Knapsack
A thief robbing a store and can carry a maximal weight of W into his knapsack. There are N items and ith item weigh wi and is value vi. What is the maximum value V, that thief can take ?
Input Format :
Line 1 : N i.e. number of items
Line 2 : N Integers i.e. weights of items separated by space
Line 3 : N Integers i.e. values of items separated by space
Line 4 : Integer W i.e. maximum weight thief can carry
Output Format :
Line 1 : Maximum value V
Constraints
1 <= N <= 20
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


#include <iostream>
using namespace std;
int knapsack(int* weight, int* values, int n, int maxWeight){
    // Base case
	if(n == 0 || maxWeight == 0) {
		return 0;
	}

	if(weight[0] > maxWeight) {
		return knapsack(weight + 1, values + 1, n - 1, maxWeight);
	}

	// Recursive calls
	int x = knapsack(weight + 1, values + 1, n - 1, maxWeight - weight[0]) + values[0];
	int y = knapsack(weight + 1, values + 1, n - 1, maxWeight);

	return max(x, y);
}
