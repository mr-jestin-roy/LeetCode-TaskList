class Solution {
public:
    string removeDuplicateLetters(string s) {
        string ans = "";
        vector<int> dict(256,0);
        vector<bool> visited(256,false);
        
        for(auto ch : s) dict[ch]++;
         /** the key idea is to keep a monotically increasing sequence **/
        
        for(auto c:s){
            dict[c]--;
            /** to filter the previously visited elements **/
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