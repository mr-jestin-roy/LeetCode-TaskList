class Solution {
public:
    string decodeString(string s) {
        stack<string> chars;
        stack<int> nums;
        string ans;
        int num =0;
    
        for(char c : s){
            if(isdigit(c)){
                num = num*10 + (c -'0');
            }
            else if(isalpha(c)){
                ans.push_back(c);
            }
            else if(c == '['){
                chars.push(ans);
                nums.push(num);
                //reset the var
                ans= "";
                num =0;
            }
            else if(c == ']'){
                //now we add the temp string k times
                string temp = ans;
                for(int i=0;i< nums.top()-1;i++)
                    ans += temp;
                
                ans = chars.top() + ans;
                chars.pop();
                nums.pop();
            }
        }
        return ans;
    }
};