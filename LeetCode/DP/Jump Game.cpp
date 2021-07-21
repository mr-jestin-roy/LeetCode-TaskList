class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int n = nums.size(), ind = 0;
        for (int reach = 0; ind < n && ind <= reach; ind++)
            reach = max(reach, ind + nums[ind]);
        return (ind == n);
    }
};