class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l=0, r=0, res =0;
        long long total = 0;
        while(r < nums.size()){
            total+=nums[r];
            while((long long)nums[r] * (r-l+1) > total+k){
                //edge case
                total -= nums[l];
                l++;
            }
            // max window len
            res = max(res, r-l+1);
            r++;
        }
        return res;
    }
};