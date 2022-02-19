class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans ="";
        for(auto &i:num){
            //remove the largest element till that point
            while(ans.size() > 0 && ans.back() > i && k >0 ){
                ans.pop_back();
                k--;
            }
            //insert the new digit
            if(ans.size() >0 || i!='0')
                ans.push_back(i);
        }
        while(k>0 && ans.size() >0){
            ans.pop_back();
            k--;
        }
        //returning the k digit removed string
        return ans.size()>0 ? ans:"0";
    }
};