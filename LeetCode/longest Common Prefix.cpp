class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";

        for (int i = 0; i < strs[0].length(); i++)
        {
            char curr_char = strs[0][i];
            for (const string &s : strs)
            {
                if (i >= s.length() || s[i] != curr_char) {
                    return s.substr(0, i);
                    // we found the end of our prefix
                    // imagine the strings are "abc" and "abe"
                    // the matching ends at "e", so we return "ab"
                }
            }
        }
        return strs[0];     // everything matched with the first string, so return the whole first string
    }
};