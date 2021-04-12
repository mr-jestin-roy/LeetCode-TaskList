class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if (s.size() == 0) return 0;
        int i, j;
        i = 0; j = 0;
        vector<int> cnt(326, 0);
        cnt[s[0]]++;
        int ans = 1;

        while (j != n - 1) {
            if (cnt[s[j + 1]] == 0) {
                j++;
                cnt[s[j]] = 1;
                ans  = max(ans, j - i + 1);
            }
            else {
                cnt[s[i]]--;
                i++;
            }
        }
        return ans;

    }
};