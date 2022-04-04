class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        //longest common sequence DP question
        int n = nums1.size(), m = nums2.size();
        if(n < m){
            swap(n,m);
            swap(nums1, nums2);
        }
        vector<int> prev(m+1), curr(m+1);
        for(int i= 1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(nums1[i-1] == nums2[j-1]){
                   curr[j] = 1+ prev[j-1];
                }
                else{
                    curr[j] = max(prev[j], curr[j-1]);
                }
            }
            //reset the array to prev
            prev = curr;
        }
        return prev[m];
    }
};

//WITHOUT SPACE OPTIMIZATION
// int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
//         //longest common sequence DP question
//         int n = nums1.size(), m = nums2.size();
//         vector<vector<int>> dp(n+1, vector<int> (m+1));
//         for(int i= 1;i<=n;i++){
//             for(int j=1;j<=m;j++){
//                 if(nums1[i-1] == nums2[j-1]){
//                     dp[i][j] = 1 + dp[i-1][j-1];
//                 }
//                 else{
//                     dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
//                 }
//             }
//         }
//         return dp[n][m];
//     }