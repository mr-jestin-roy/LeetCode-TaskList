// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stk;
        for (auto i : s)
        {
            if (i == '(' || i == '{' || i == '[')
                stk.push(i);
            else
            {
                if (stk.empty() || (stk.top() == '(' && i != ')') || (stk.top() == '[' && i != ']') || (stk.top() == '{' && i != '}'))
                    return false;

                stk.pop();
            }
        }
        return stk.empty();
    }
};

bool checkBalanced(char *exp)
{
    stack<char> s;

    int len = strlen(exp);

    for (int i = 0; i < len; i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            s.push(exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if (s.empty())
            {
                return false;
            }

            char ch = s.top(); // remove toppest bracket
            s.pop();           //delete toppest bracket
            if (exp[i] == ')' && ch == '(')
            {
                continue;
            }
            else if (exp[i] == ']' && ch == '[')
            {
                continue;
            }
            else if (exp[i] == '}' && ch == '{')
            {
                continue;
            }
            else
            {
                return false;
            }
        }
    }