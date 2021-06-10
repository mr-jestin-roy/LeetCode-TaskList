// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

// Follow up: Could you implement a solution using only O(1) extra space complexity and O(n) runtime complexity?

// APPROACH 1
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int sum = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            sum += i - nums[i];
        }
        return sum;
    }
};
