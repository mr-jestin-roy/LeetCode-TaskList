// Given a string columnTitle that represents the column title as appear in an Excel sheet, return its corresponding column number.
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.size();
        if(n==1)
            return columnTitle[0] - 'A' + 1;
        int res = 0;
        for(int i=0;i<n;i++)
        {
            res = 26*res + (int)(columnTitle[i] - 'A' +1);
        }
        return res;
    }
};