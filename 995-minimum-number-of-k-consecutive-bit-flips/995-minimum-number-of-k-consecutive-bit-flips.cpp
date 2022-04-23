class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n = nums.size();
        int flipped = 0, res = 0;
        vector<int> isFlipped(n);
        for(int i=0;i<n;i++){
            if(i >= k)
                flipped ^= isFlipped[i-k];
            if(flipped == nums[i]){
                if(i+k > n)
                    return -1;
                
                //reset the variables
                isFlipped[i] = 1;
                flipped ^= 1;
                res++;
            }
        }
        return res;
    }
};