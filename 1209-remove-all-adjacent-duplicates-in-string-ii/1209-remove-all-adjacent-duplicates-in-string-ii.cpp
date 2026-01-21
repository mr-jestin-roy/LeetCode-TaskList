class Solution {
public:
        string removeDuplicates(string s, int k) {
        vector<pair<char, int>> st;
        for(int i=0; s[i] != '\0'; i++){
            if(!st.empty() && (st.back().first == s[i]))
                st.back().second++;
            else
                st.push_back({s[i], 1});

            if(st.back().second == k){
                st.pop_back();
            }
        }
        string resultant_uniq_str = "";
        for(auto &p: st){
            resultant_uniq_str.append(p.second, p.first);
        }
        return resultant_uniq_str;
    }
};