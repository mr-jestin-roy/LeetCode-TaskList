// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int res = 0;
        int lmax = 0, rmax = 0;
        while (left <= right)
        {
            if (height[left] <= height[right])
            {

                if (height[left] >= lmax)
                    lmax = height[left];
                else
                    res += lmax - height[left];

                left++;
            }
            else
            {

                if (height[right] >= rmax)
                    rmax = height[right];
                else
                    res += rmax - height[right];

                right--;
            }
        }
        return res;
    }
};