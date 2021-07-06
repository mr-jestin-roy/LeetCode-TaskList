//recursive approach no auxillary space & TC : O(n!*n)
class Solution
{
public:
    void recurPermutate(int index, vector<int> &nums, vector<vector<int>> &ans)
    {
        if (index == nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for (int i = index; i < nums.size(); i++)
        {
            swap(nums[index], nums[i]);
            recurPermutate(index + 1, nums, ans);
            swap(nums[index], nums[i]); //important to reswap it
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        recurPermutate(0, nums, ans);
        return ans;
    }
};
//recursive approach I with extra space
class Solution
{
public:
    void recurPermutate(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, int freq[])
    {
        if (ds.size() == nums.size())
        { //base case
            ans.push_back(ds);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (!freq[i])
            {
                ds.push_back(nums[i]);
                freq[i] = 1;
                recurPermutate(ds, nums, ans, freq);
                freq[i] = 0; //remove it after recursive call
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        int freq[nums.size()];
        for (int i = 0; i < nums.size(); i++)
            freq[i] = 0;
        recurPermutate(ds, nums, ans, freq);
        return ans;
    }
};