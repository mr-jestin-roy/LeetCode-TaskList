Multiplication (Recursive)
Given two integers m & n, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.
Input format : m and n (in different lines)

Sample Input :
3 
5
Sample Output -
15



/***************************************************** SOLUTION **************************************************************************/


int multiplyNumbers(int x, int y) {
    
	/* 0 multiplied with anything gives 0 */
    if(y == 0) 
    return 0; 
  
    /* Add x one by one */
    if(y > 0 ) 
    return (x + multiplyNumbers(x, y-1)); 
  
    /* the case where y is negative */
    if(y < 0 ) 
    return -multiplyNumbers(x, -y); 
} 
