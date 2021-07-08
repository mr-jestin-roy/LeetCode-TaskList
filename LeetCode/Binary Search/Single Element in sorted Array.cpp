// You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once. Find this single element that appears only once.

class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int low = 0, high = nums.size() - 2;
        while (low <= high)
        {
            int mid = (low + high) >> 1;
            if (nums[mid] == nums[mid ^ 1])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return nums[low];
    }
};