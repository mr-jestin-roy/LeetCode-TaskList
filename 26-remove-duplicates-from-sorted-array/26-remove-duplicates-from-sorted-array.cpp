class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       set<int> s;
        unique(nums.begin(), nums.end()); //erasing all consecutitive duplicate elements 
        for(auto i: nums)
            s.insert(i);
        
        return s.size(); //returning no. of unique elements
    }
};