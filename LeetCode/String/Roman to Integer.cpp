// Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> table = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}};
        int sum = table[s.back()];
        for (int i = s.length() - 2; i >= 0; i--)
        {
            if (table[s[i]] < table[s[i + 1]])
            {
                sum -= table[s[i]];
            }
            else
            {
                sum += table[s[i]];
            }
        }
        return sum;
    }
};