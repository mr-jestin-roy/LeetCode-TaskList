#include <bits/stdc++.h>
class Solution {
public:
    int myAtoi(string s) {
        int res = 0, i = 0, sign = 1;
        while (s[i] == ' ') {
            i++;
        }
        if (s[i] == '-')
        {
            sign = -1;
            i++;
        }
        else if (s[i] == '+')
        {
            sign = 1;
            i++;
        }

        while (s[i] >= '0' && s[i] <= '9') {
            if (res > INT_MAX / 10 || (res == INT_MAX / 10 && s[i] - '0' > 7)) {
                if (sign == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }
            res = res * 10 + (s[i] - '0');
            i++;
        }
        return sign * res;
    }
};