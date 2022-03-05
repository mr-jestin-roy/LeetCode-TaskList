class Solution {
public:
    int rob(vector<int>& nums) {
       //base case
        if(nums.size() == 1) return nums[0];
        
        vector<int> dp(nums);
        dp[1] = max(nums[0], nums[1]);
        //apply house robbing concept
        for(int i=2;i<nums.size();i++){
            dp[i] = max(dp[i-1], nums[i] + dp[i-2]);
        }
        return dp.back();
    }
};