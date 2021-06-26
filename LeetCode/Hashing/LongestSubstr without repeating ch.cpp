// Given a string s, find the length of the longest substring without repeating characters.

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        vector<int> mpp(256, -1); //frequency map
        int left = 0, right = 0;
        int n = s.size();
        int len = 0;
        while (right < n)
        {
            if (mpp[s[right]] != -1)
                left = max(mpp[s[right]] + 1, left);
            // Jump left ptr cleverly using the above step
            mpp[s[right]] = right;            // update last seen of that ch
            len = max(len, right - left + 1); //update longest substr
            right++;
        }
        return len;
    }
};