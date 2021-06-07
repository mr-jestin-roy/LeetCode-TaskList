// Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate
// (i, ai). n vertical lines are drawn such that the two endpoints of the line i is at (i, ai)
// and (i, 0). Find two lines, which, together with the x-axis forms a container, such that
// the container contains the most water.
// Notice that you may not slant the container.

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int ans = 0;
        int j = height.size() - 1;
        int i = 0;
        while (i < j)
        {
            ans = max(ans, (j - i) * min(height[i], height[j]));
            if (height[i] == height[j])
            {
                i++;
                j--;
            }
            else if (height[i] < height[j])
                i += 1;
            else
                j -= 1;
        }
        return ans;
    }
};