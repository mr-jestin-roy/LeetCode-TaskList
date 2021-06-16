// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        //Moore's Voting Algorithm O(n)
        int count = 0;
        int majority = 0;

        for (int num : nums)
        {
            if (count == 0)
            {
                majority = num;
            }
            if (num == majority)
                count++;
            else
                count--;
        }
        return majority;
    }
};