class Solution {
public:
    string defangIPaddr(string address) {
        string fang = "";
        for(auto c : address){
            (c=='.') ? fang += "[.]" : fang += c;
        }
        return fang;
    }
};