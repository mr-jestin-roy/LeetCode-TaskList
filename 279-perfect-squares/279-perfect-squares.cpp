class Solution {
public:
    // Time complexity: O(n*sqrt(n)) outer loop is of sqrt(n) iterations and in the inner loop <n iterations roughly.
// Space Complexity: O(n).
    int numSquares(int n) {
        //vector for updating the DP Array/values
        vector<int> dp(n+1, INT_MAX);
        //base case
        dp[0] = 0;
        int count = 1;
        while(count*count <= n){
            int sq = count*count;
            for(int i=sq;i<n+1;i++){
                dp[i] = min(dp[i-sq] + 1, dp[i]);
            }
            count++;
        }
        return dp[n];
    }
};