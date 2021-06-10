//First Missing Positive
// Given an unsorted integer array nums, find the smallest missing positive integer.

// You must implement an algorithm that runs in O(n) time and uses constant extra space.

class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n; ++i)
            while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i])
                swap(nums[i], nums[nums[i] - 1]);

        for (int i = 0; i < n; ++i)
            if (nums[i] != i + 1)
                return i + 1;

        return n + 1;
    }
};

// TC O(N) & SC is O(1)