class Solution {
public:
    // Google OnSite Linked List Question .
    //find a minimum number of API calls ( move()) to sort the given Linked List)
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int LIS = 1;
        vector<int> dp(n,1);
        for(int i = n-1;i >= 0; i--){
           for(int j = i+1; j < n ; j++){    //always compare it to the ones to the right (until the end)
               if(nums[i] < nums[j]){           //if it is increasing 
                   dp[i] = max(dp[i], dp[j] + 1); //update DP 
               }
               LIS = max(LIS, dp[i]); //update the global max
           } 
        }
        return LIS;
        //ANSWER IS N - LIS & Time Complexity = O(n) && Space Complexity = O(1)
    }
};