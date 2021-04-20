class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> count;
        unordered_map<int, int> firstInd;
        int n = nums.size();
        int maxi = 0;
        int len = 0;
        for (int i = 0; i < n; i++) {
            if (count[nums[i]] == 0) firstInd[nums[i]] = i;
            count[nums[i]]++;

            if (maxi == count[nums[i]]) {
                len = min(len, i - firstInd[nums[i]] + 1);
            } else if (maxi < count[nums[i]]) {
                len = i - firstInd[nums[i]] + 1;
                maxi = count[nums[i]];
            }

        }
        return len;
    }
};