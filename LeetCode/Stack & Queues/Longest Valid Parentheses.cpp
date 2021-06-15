// Longest Valid Parentheses
// Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.

class Solution
{
public:
    int longestValidParentheses(string s)
    {
        int n = s.length();

        stack<int> validStack;
        validStack.push(-1);

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                validStack.push(i);
            else
            {
                if (!validStack.empty())
                {
                    validStack.pop();
                }

                if (!validStack.empty())
                    ans = max(ans, i - validStack.top());
                else
                    validStack.push(i);
            }
        }
        return ans;
    }
};