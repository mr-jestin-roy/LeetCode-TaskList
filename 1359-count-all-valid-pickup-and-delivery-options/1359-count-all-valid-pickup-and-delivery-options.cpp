class Solution {
public:
    //iterative method
    int countOrders(int n) {
        long res =1;
        long mod = 1e9+7;
        for(int i=1;i<=n;++i){
            res = res* (i*2 -1)*i % mod;
        }
        return res;
    }
    //by recusrion method
    // int countOrders(int n, long res =1) {
    //     return n ? countOrders(n-1,res*(n*2 - 1)*n % long(1e9+7)): res;
    // }
};