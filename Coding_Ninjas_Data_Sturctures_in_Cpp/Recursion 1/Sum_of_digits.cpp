Sum of digits (recursive)
Write a recursive function that returns the sum of the digits of a given integer.
Sample Input :
12345
Sample Output :
15


/***************************************************** SOLUTION **************************************************************************/


int sumOfDigits(int n) {
    // Write your code here
    if (n == 0) 
       return 0; 
    return (n % 10 + sumOfDigits(n / 10)); 
}
