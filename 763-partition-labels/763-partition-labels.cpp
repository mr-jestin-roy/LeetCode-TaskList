class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> res;
        vector<int> pos(26,0);
        for(int i=0;i < s.size(); i++)
            pos[s[i]-'a'] = i;
        
        int ind = INT_MIN, lastPos = 0;
        for(int i=0; i < s.size(); i++){
            ind = max(ind, pos[s[i]-'a']);
            if(ind == i){
                res.push_back(i - lastPos +1);
                lastPos = i+1;
            }
        }
        return res;
    }
};