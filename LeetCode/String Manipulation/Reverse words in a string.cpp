class Solution
{
public:
    string reverseWords(string s)
    {
        stack<string> st;
        string temp = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                st.push(temp);
                temp = "";
            }
            else
                temp += s[i];
        }
        st.push(temp);
        string answer;
        while (!st.empty())
        {
            if (st.top() != "")
                answer += st.top() + " ";
            st.pop();
        }
        return answer.substr(0, answer.length() - 1);
    }
};