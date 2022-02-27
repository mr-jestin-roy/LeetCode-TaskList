class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        unique(nums.begin(),nums.end());
        for(auto i : nums) s.insert(i);
        return s.size();
    }
};