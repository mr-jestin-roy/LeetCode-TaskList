class Solution
{
public:
    vector<string> AllPossibleStrings(string s)
    {
        vector<string> res;
        int n = s.size();
        for (int num = 0; num < (1 << n); num++)
        {
            string sub = "";
            for (int i = 0; i < n; i++)
            {
                if (num & (1 << i))
                {
                    sub += s[i];
                }
            }
            if (sub.size() > 0)
                res.push_back(sub);
        }
        sort(res.begin(), res.end());
        return res;
    }
};