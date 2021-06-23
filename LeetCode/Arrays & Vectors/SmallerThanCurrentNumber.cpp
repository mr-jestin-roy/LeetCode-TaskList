//  How Many Numbers Are Smaller Than the Current Number

class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> result;
        int count[101] = {0, 0, 0};
        for (int i = 0; i < nums.size(); i++)
            count[nums[i]]++;

        for (int i = 1; i < 101; i++)
        {
            count[i] += count[i - 1];
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                result.push_back(0);
            else
                result.push_back(count[nums[i] - 1]);
        }

        return result;
    }
};