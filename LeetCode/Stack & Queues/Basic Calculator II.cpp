// Basic Calculator II
// Given a string s which represents an expression, evaluate this expression and return its value.

class Solution
{
public:
    int calculate(string s)
    {
        int len = s.length();
        if (len == 0)
            return 0;
        stack<int> stack;
        int currNum = 0;
        char op = '+';
        for (int i = 0; i < len; i++)
        {
            char currChar = s[i];
            if (isdigit(currChar))
            {
                currNum = 10 * currNum + (currChar - '0');
            }
            if (!isdigit(currChar) && !iswspace(currChar) || i == len - 1)
            {
                if (op == '-')
                {
                    stack.push(-currNum);
                }
                else if (op == '+')
                {
                    stack.push(currNum);
                }
                else if (op == '*')
                {
                    int stackTop = stack.top();
                    stack.pop();
                    stack.push(stackTop * currNum);
                }
                else if (op == '/')
                {
                    int stackTop = stack.top();
                    stack.pop();
                    stack.push(stackTop / currNum);
                }

                op = currChar;
                currNum = 0;
            }
        }
        int ans = 0;
        while (stack.size() != 0)
        {
            ans += stack.top();
            stack.pop();
        }
        return ans;
    }
};