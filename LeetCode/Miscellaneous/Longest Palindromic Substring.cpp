class Solution {
public:

    string longestPalindrome(string s) {

        int maxlen = 1, start = 0;
        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; j < s.length(); j++) {
                int flag = 1;
                for (int k = 0; k < ((j - i + 1) / 2); k++) {
                    if (s[i + k] != s[j - k])
                        flag = 0;
                }

                if (flag && (j - i + 1) > maxlen) {
                    start = i;
                    maxlen = j - i + 1;
                }
            }
        }
        return s.substr(start, start + maxlen);

    }
};