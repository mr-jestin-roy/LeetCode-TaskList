class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int maxAns =0, n = prices.size();
        int hold = -prices[0];
        for(int i=1;i<n;i++){
            maxAns = max(maxAns,hold + prices[i]-fee);
            hold  = max(hold, maxAns-prices[i]);
        }
        return maxAns;
    }
};