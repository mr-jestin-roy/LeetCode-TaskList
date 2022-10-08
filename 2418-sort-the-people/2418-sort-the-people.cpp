class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector< pair<int,string>> arr;
        for(int i =0;i < names.size(); i++){
            arr.push_back(make_pair(heights[i],names[i]));
        }
        sort(arr.rbegin(), arr.rend());
        vector<string> ans;
        for(auto i : arr){
            ans.push_back(i.second);
        }
        return ans;
    }
};