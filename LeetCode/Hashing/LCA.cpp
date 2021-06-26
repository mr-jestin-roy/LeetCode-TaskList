// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

// You must write an algorithm that runs in O(n) time.
//OPTIMAL APPROACH O(3N) USING SET
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        set<int> hashSet;
        for (int num : nums)
        {
            hashSet.insert(num);
        }

        int maxStreak = 0;
        for (int num : nums)
        {
            if (!hashSet.count(num - 1))
            {
                int currNum = num;
                int currStreak = 1;

                while (hashSet.count(currNum + 1))
                {
                    currNum += 1;
                    currStreak += 1;
                }
                maxStreak = max(maxStreak, currStreak);
            }
        }
        return maxStreak;
    }
};