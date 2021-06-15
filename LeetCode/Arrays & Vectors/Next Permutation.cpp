// // Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

// // If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

// // The replacement must be in place and use only constant extra memory.

// O(N) APPROACH

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size(), k, l;
        for (k = n - 2; k >= 0; k--)
        {
            if (nums[k] < nums[k + 1])
                break;
        }

        if (k < 0)
        {
            reverse(nums.begin(), nums.end());
        }
        else
        {
            for (l = n - 1; l > k; l--)
            {
                if (nums[l] > nums[k])
                {
                    break;
                }
            }
            swap(nums[k], nums[l]);
            reverse(nums.begin() + k + 1, nums.end());
        }
    }
};