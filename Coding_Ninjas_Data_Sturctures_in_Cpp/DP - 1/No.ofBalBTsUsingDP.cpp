Code : No. of balanced BTs using DP
Given an integer h, find the possible number of balanced binary trees of height h. You just need to return the count of possible binary trees which are balanced.
This number can be huge, so return output modulus 10^9 + 7.
Time complexity should be O(h).
Input Format :
Integer h
Output Format :
Count % 10^9 + 7
Input Constraints :
1 <= h <= 10^7
Sample Input 1:
3
Sample Output 1:
15
Sample Input 2:
4
Sample Output 2:
315


/******************************************************* SOLUTION ************************************************************************/


int binaryTreesOfHeightH(int h) {
    // Write your code here
    int mod =  (pow(10, 9)) + 7;
    int dp[h + 1]; 
    //base cases 
    dp[0] = dp[1] = 1; 
    for(int i = 2; i <= h; i++) { 
        dp[i] = ((long)dp[i - 1] * ((2 * (long)dp [i - 2])%mod + dp[i - 1])%mod) % mod; 
    } 
    return dp[h]; 
}
