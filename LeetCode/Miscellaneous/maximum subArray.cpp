class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int temp = 0, ans = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            temp += nums[i];
            temp = max(0, temp);
            ans = max(ans, temp);
        }
        if (ans == 0) {
            sort(nums.begin(), nums.end());
            return nums[nums.size() - 1];
        }
        return ans ;
    }
};