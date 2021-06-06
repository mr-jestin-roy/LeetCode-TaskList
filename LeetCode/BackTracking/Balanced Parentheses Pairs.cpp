//  Generate Parentheses
// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> resultantString;
        formingPar(resultantString, "", n, 0);
        return resultantString;
    }

    void formingPar(vector<string> &res, string str, int open, int close)
    {
        if (open == 0 && close == 0)
        {
            res.push_back(str);
            return;
        }
        if (close > 0)
            formingPar(res, str + ")", open, close - 1);
        if (open > 0)
            formingPar(res, str + "(", open - 1, close + 1);
    }
};