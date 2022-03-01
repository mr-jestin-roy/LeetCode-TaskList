class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > set<int>(nums.begin(),nums.end()).size();
    }
};
//method 2
// bool containsDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         unordered_map<int,int> mp;
//         for(auto i:nums){
//             if(mp[i] == 1)
//                 return true;
//             mp[i]++;
//         }
//         return false;
// }