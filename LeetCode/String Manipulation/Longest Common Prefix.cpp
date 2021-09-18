class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.size() == 0)
            return "";

        for (int i = 0; i < strs[0].length(); i++)
        {
            char curr_char = strs[0][i];
            for (const string &s : strs)
            {
                if (i >= s.length() || s[i] != curr_char)
                    return s.substr(0, i);
                // we found the end of our prefix
            }
        }
        return strs[0];
        //whole string
    }
};