class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        //Keep a monotonic increasing stack result 
        vector<int> stack;
        for(int i=0;i<nums.size(); i++){
            //remove if any subsequence is not competitive 
            while(!stack.empty() && stack.back() > nums[i] && stack.size()-1+nums.size()-i >= k){
                stack.pop_back();
            }
            //pushing into the stack if it is not filled till size  of k
            if(stack.size() < k)
                stack.push_back(nums[i]);
        }
        //returning the most competitive stack or subsequence
        return stack;
        //code by Jestin on 19th Feb "22
    }
};