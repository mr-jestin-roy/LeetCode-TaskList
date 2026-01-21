class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(int i=0; s[i] != '\0'; i++){
            if(!st.empty() && (st.top() == s[i]))
                st.pop();
            else
                st.push(s[i]);
        }
        string resultant_uniq_str = "";
        while(!st.empty()){
            resultant_uniq_str = st.top() + resultant_uniq_str;
            st.pop();
        }
        return resultant_uniq_str;
    }
};