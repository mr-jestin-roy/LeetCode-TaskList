class Solution
{
public:
    bool isAnagram(string s, string t) //O(N logN)
    {
        if (s.length() != t.length())
            return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != t[i])
                return false;
        }
        return true;
    }
};

class Solution
{
public:
    bool isAnagram(string s, string t)
    { //O(N)
        if (s.length() != t.length())
            return false;
        vector<int> cnt1(256, 0);
        vector<int> cnt2(256, 0);

        for (int i = 0; s[i] && t[i]; i++)
        {
            cnt1[s[i]]++;
            cnt2[t[i]]++;
        }
        for (int i = 0; i < 256; i++)
        {
            if (cnt1[i] != cnt2[i])
                return false;
        }
        return true;
    }
};