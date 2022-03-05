class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
         int n = 10001;
        vector<int> sum(n,0);
        vector<int> dp(n,0);
        
        for(auto i:nums)
            sum[i] += i;
        
        dp[0] =0;
        dp[1] = sum[1];
        //apply house robbing concept
        for(int i=2;i<n;i++){
            dp[i] = max(dp[i-1], sum[i] + dp[i-2]);
        }
        return dp[n-1];
    }
};