class Solution {
public:
    //advanced level of Google Onsite Round
    //Time Complexity is O(n^2) && space complexity = O(n)
    int findNumberOfLIS(vector<int>& nums) {
        int LIS = 0, result = 0;
        int n = nums.size();
       vector<pair<int,int>> dp(n,{1,1});          //dp[i]: {length, number of LIS which ends with nums[i]}
        for(int i =0;i<n;i++){
            for(int j= 0; j <i;j++){
                if(nums[i] > nums[j]){
                    if(dp[i].first == dp[j].first + 1)dp[i].second += dp[j].second;
                    if(dp[i].first < dp[j].first + 1)dp[i] = {dp[j].first + 1, dp[j].second};
                }
            }
            if(LIS == dp[i].first)
                result += dp[i].second;
            if(LIS < dp[i].first){
                LIS = dp[i].first;
                result = dp[i].second;
            }
        }
       return result;
    }
//     The idea is to use two arrays len[n] and cnt[n] to record the maximum length of Increasing Subsequence and the coresponding number of these sequence which ends with nums[i], respectively. That is:

// len[i]: the length of the Longest Increasing Subsequence which ends with nums[i].
// cnt[i]: the number of the Longest Increasing Subsequence which ends with nums[i].
//     C++ version: (use vector<pair<int, int>> dp to combine len[] and cnt[])
};