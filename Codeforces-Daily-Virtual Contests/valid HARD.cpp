class Solution {
public:
    int longestValidParentheses(string s) {
        int longest = 0, n = s.length();
        stack<int> stk;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                stk.push(i);
            else
            {
                if (!stk.empty())
                {
                    if (s[stk.top()] == '(')
                        stk.pop();
                    else
                        stk.push(i);
                }
                else
                    stk.push(i);
            }
        }
        if (stk.empty())
            longest = n;
        else
        {
            int a = n, b = 0;
            while (!stk.empty())
            {
                b = stk.top();  stk.pop();

                longest = max(longest, a - b - 1);
                a = b;
            }
            longest = max(longest, a);
        }
        return longest;
    }
};