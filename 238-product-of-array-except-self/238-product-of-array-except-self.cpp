class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1, zeroCnt = count(begin(nums), end(nums), 0);
        if(zeroCnt > 1) return vector<int>(size(nums));               // Case-1
        for(auto c : nums) 
            if(c) prod *= c;                                          // calculate product of all elements except 0
        for(auto& c : nums)
            if(zeroCnt) c = c ? 0 : prod;                             // Case-2
            else c = prod / c;                                        // Case-3
        return nums;
    }
};