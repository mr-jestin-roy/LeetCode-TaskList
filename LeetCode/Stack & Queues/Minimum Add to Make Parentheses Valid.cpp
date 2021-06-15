// Given a string s of '(' and ')' parentheses, we add the minimum number of parentheses ( '(' or ')', and in any positions ) so that the resulting parentheses string is valid.

// Given a parentheses string, return the minimum number of parentheses we must add to make the resulting string valid.

class Solution
{
public:
    int minAddToMakeValid(string s)
    {
        int left = 0;
        int right = 0;
        for (char c : s)
        {
            if (c == '(')
                right++;
            else if (right > 0)
                right--;
            else
                left++;
        }
        return left + right;
    }
};