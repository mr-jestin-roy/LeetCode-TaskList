// O(N) APPROACH

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        for (int p = 0, q = 0; q < nums.size(); q++)
        {
            if (nums[q] != 0 && q == p) //skip nonzero elements
                p++;
            else if (nums[q] != 0)
            {
                nums[p++] = nums[q];
                nums[q] = 0;
            }
        }
    }
};