//KADANE'S ALGORITHM O(N) APPROACH

// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0;
        int maxsofar = INT_MIN;
        for (auto x : nums)
        {
            sum += x;
            maxsofar = max(maxsofar, sum);
            if (sum < 0)
                sum = 0;
        }
        return maxsofar;
    }
};