class Solution {
public:
    string capitalizeTitle(string title) {
       auto s = title;
        int j =0;
        for (int i = 0; i <= s.size(); ++i) {
         if (i == s.size() || s[i] == ' ') {
            if (i - j > 2)
                s[j] = toupper(s[j]);
            j = i + 1;
         }
         else
            s[i] = tolower(s[i]);
       }
    return s; 
    }
};