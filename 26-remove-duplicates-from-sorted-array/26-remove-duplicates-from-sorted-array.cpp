class Solution {
public:
    //USING TWO POINTER METHOD O(N) & SPACE O(1)
    int removeDuplicates(vector<int>& nums) {
       int n = nums.size();
        if(n == 0) return 0;  // base case
        int left = 0, right = 0;
        while(right < n){
            if(nums[left] != nums[right]){
                left++;
                nums[left] = nums[right];
            }
            right++;
        }
        return left+1;
    }
};
// STANDARD SOLUTION + Takes extra memory space for set
//  int removeDuplicates(vector<int>& nums) {
//        set<int> s;
//         unique(nums.begin(), nums.end()); //erasing all consecutitive duplicate elements 
//         for(auto i: nums)
//             s.insert(i);
        
//         return s.size(); //returning no. of unique elements
//     }