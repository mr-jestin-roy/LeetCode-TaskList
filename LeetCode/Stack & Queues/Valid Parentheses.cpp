class Solution {
public:
    bool isValid(string s) {
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