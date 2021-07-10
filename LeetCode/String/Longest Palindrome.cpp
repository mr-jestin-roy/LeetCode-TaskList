#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestPalindrome(string s)
    {
        int odd = 0;
        for (char c = 'A'; c <= 'z'; c++)
        {
            odd += (count(s.begin(), s.end(), c) % 2 != 0);
        }
        return s.size() - odd + (odd > 0);
    }
};