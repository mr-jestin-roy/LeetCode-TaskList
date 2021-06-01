// Write a function that reverses a string. The input string is given as an array of characters s.

class Solution
{
public:
    void reverseString(vector<char> &s)
    {

        int n = s.size();
        for (int i = 0; i < n / 2; i++)
        {
            char temp = s[n - 1 - i];
            s[n - 1 - i] = s[i];
            s[i] = temp;
        }
    }
};