// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

//Brute force approach
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;

        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == (target - nums[j]))
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};
//Optimal approach
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        unordered_map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++)
        {
            if (mpp.find(target - nums[i]) != mpp.end())
            {
                ans.push_back(mpp[target - nums[i]]);
                ans.push_back(i);
                return ans;
            }
            mpp[nums[i]] = i;
        }
        return ans;
    }
};