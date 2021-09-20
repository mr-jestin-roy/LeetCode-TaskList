class Solution {
public:
    int countBinarySubstrings(string s) {
        int cur=1,pre=0,ans =0;
        for(int i=1;i<s.size();i++){
            if(s[i] == s[i-1])
                cur++;
            else{
                ans += min(cur,pre);
                pre = cur;
                cur = 1;
            }
        }
        return ans + min(cur,pre);
    }
};