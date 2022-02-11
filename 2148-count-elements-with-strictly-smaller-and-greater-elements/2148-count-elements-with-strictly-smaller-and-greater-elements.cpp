class Solution {
public:
    int countElements(vector<int>& nums) {
        map<int,int> m;
        int right = INT_MIN;
        int left = INT_MAX;
        for(auto i: nums){
            m[i]++;
            right = max(right,i);
            left = min(left, i);
        }
        if(left == right) return 0;
        
        return nums.size() - m[left] - m[right];
    }
};