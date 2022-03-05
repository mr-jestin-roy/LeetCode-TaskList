class Solution {
public:
    //USING MEMO DP so that they aren't recalculated when they are encountered again 
    int robHelper(vector<int> &nums, vector<int> &dp, int i){
        if(i >= nums.size()) 
            return 0; //base case
        if(dp[i] != -1)         //already calculated dp[i]
            return dp[i];
        
        //we make dp[i] if it is -1 intiially
        return dp[i] = max(robHelper(nums,dp,i+1), nums[i] + robHelper(nums,dp,i+2));
    }
    int rob(vector<int> &nums){
        vector<int> dp(nums.size(), -1);
        return robHelper(nums, dp, 0);
    }
    
};
//BRUTE FORCE METHOD USING RECURSION
// int rob(vector<int> &nums,int i=0){
//         return i < nums.size() ? max(rob(nums, i+1), nums[i] + rob(nums,i+2)) : 0 ;
// }


//dp tabulation method
//     int rob(vector<int>& nums) {
//               if(nums.size() == 1) return nums[0];
        
//         vector<int> dp(nums);
//         dp[1] = max(nums[0], nums[1]);
//         //apply house robbing concept
//         for(int i=2;i<nums.size();i++){
//             dp[i] = max(dp[i-1], nums[i] + dp[i-2]);
//         }
//         return dp.back();
//     }
