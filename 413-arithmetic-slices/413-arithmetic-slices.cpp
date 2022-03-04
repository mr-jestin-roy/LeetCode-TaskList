class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int ans = 0,l=0;
        for(int i=2;i<nums.size();i++){
            if(nums[i]-nums[i-1] == nums[i-1]-nums[i-2]){
                l++;
            }
            else{
                ans += (l)*(l+1)/2;
                l=0;//reset
            }
        }
        ///if any edge subarray left
        ans += l*(l+1)/2;
        return ans;
    }
};