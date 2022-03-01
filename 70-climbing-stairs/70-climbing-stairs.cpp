class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1 || n==2) return n;
        int TwoStep =1, OneStep = 1, result = 0;
        for(int i=2; i <= n;i++){
            result = TwoStep + OneStep;
            TwoStep = OneStep;
            OneStep = result;
            //this is a fibonacci sequenece
        }
        return result;
    }
};