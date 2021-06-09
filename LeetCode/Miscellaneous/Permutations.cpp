#include <bits/stdc++.h>

// Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

class Solution
{
public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> result;

        permutateRecursive(nums, 0, result);
        return result;
    }
    //permutating the vector
    void permutateRecursive(vector<int> &nums, int begin, vector<vector<int>> &result)
    {
        //one permuattion instance
        if (begin >= nums.size())
        {
            result.push_back(nums);
            return;
        }

        for (int i = begin; i < nums.size(); i++)
        {
            swap(nums[begin], nums[i]);
            permutateRecursive(nums, begin + 1, result);
            //RESET

            swap(nums[begin], nums[i]);
        }
    }
};