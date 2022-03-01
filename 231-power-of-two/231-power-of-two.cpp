class Solution {
public:
    bool isPowerOfTwo(int n) {
    while(n>1){
        if(n%2 != 0) return false;
        n/=2;
    }
        return n<=0 ? false:true;
    }
};