class Solution {
public:
// RECURSIVE BACKTRACKING   
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> output;
        vector<int> temp;
        subsetsHelper(nums,0,temp,output);
        return output;
    }
    void subsetsHelper(vector<int> &nums,int i,vector<int> &temp,vector<vector<int>> &output){
        output.push_back(temp);
        for(int j=i;j<nums.size();j++){
            temp.push_back(nums[j]);
            
            subsetsHelper(nums,j+1,temp,output);
            
            temp.pop_back();
        }
        
    }
};