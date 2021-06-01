// standard solution of O(nlogn)
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        if (nums.size() == 1)
            return nums[0];
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i += 2)
        {
            if (nums[i] != nums[i + 1] || (i + 1) == nums.size())
            {
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};

//USING BIT MANIPULATION   [ XOR Method]
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int result = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            result = result ^ nums[i];
        }
        return result;
    }
};
