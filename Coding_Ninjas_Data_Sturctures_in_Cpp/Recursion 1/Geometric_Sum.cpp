Geometric Sum
Given k, find the geometric sum i.e.
1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
using recursion. Return the answer.
Sample Input :
3
Sample Output :
1.875


/***************************************************** SOLUTION **************************************************************************/


double geometricSum(int k) {
    // Write your code here
   if(k==0)
		{
			return 1;
		}
	return 1+ 0.5*(geometricSum(k-1));
}
