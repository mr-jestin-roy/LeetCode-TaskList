class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        string s1 = "X++";
        string s2 = "++X";
        string s3 = "--X";
        string s4 = "X--";
        
        int ans = 0;
        
        for(auto i : operations){
            if(s1 == i || s2 == i){
                ans++;
            }
            else if(s3 == i || s4 == i){
                ans--;
            }
        }
        return ans;
    }
};