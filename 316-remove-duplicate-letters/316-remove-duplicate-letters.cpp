class Solution {
public:
    string removeDuplicateLetters(string s) {
        string ans = "";
        vector<int> dict(256,0);
        vector<bool> visited(256,false);
        
        for(auto ch : s) dict[ch]++;
        
        for(auto c:s){
            dict[c]--;
            if(visited[c]) continue;
            while(c < ans.back() && dict[ans.back()]){
                visited[ans.back()] = false;
                ans.pop_back();
            }
            ans += c;
            visited[c] = true;
        }
        
        return ans;
    }
};