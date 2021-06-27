#include <string>

class Solution {
public:
    int f(const string &s){
        int sum =0;
        for(const char &c : s) sum = sum*10 + (c-'a');
        return sum;
    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return f(firstWord) + f(secondWord) == f(targetWord);
        
    }
};