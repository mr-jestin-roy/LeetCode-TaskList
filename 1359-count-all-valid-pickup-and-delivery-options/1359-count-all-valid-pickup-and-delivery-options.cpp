class Solution {
public:
    //by recusrion method
    int countOrders(int n, long res =1) {
        return n ? countOrders(n-1,res*(n*2 - 1)*n % long(1e9+7)): res;
    }
};