Count Zeros
Send Feedback
Given an integer n, count and return the number of zeros that are present in the given integer using recursion.
Input Format :
Integer n
Output Format :
No. of 0s
Sample Input :
10204
Sample Output
2



/***************************************************** SOLUTION **************************************************************************/


int countZeros(int num) {
    // Write your code here
    if(num == 0)
       return 0;

    if(num %10 ==0)
        return 1 + countZeros(num / 10);
    else
        return countZeros(num/10); 
}
