class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        // Use one tree map can easily get the maximum and the minimum at the same time.
        // In java, we can use TreeMap to count elements.
        // In cpp, it suports multi treeset, that's even better.

        // Time O(NogN)
        int i=0,j;
        multiset<int> m; //first time with multiset
        for(j=0; j<nums.size();j++){
            m.insert(nums[j]);
            if(*m.rbegin() - *m.begin() > limit){
                m.erase(m.find(nums[i]));   //Remove only one instance of element from multiset having same value
                i++;
            }
        }
        //return the longest length subarray with given condition
        return j - i;
    
    }
};