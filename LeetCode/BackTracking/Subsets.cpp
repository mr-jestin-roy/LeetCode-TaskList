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

class Solution {
public:
    //BACKTRACKING ITERATIVE ALGORITHM
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> output = {{}};
        for(int num : nums){
            int n = output.size();
            for(int i=0;i<n;i++){
                output.push_back(output[i]);
                output.back().push_back(num);
            }
        }
        return output;
    }
    
};