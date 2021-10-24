class Solution {
public:
    int minCost(vector<int> &days,vector<int> &costs,int n,int day,vector<int> &dp){
        int ind = lower_bound(days.begin(),days.end(),day)-days.begin();
        if(ind >= n)
            return 0;
        if(dp[ind] != -1)
            return dp[ind];
        int c1 = costs[0]+minCost(days,costs,n,days[ind]+1,dp);
        int c2 = costs[1]+minCost(days,costs,n,days[ind]+7,dp);
        int c3 = costs[2]+minCost(days,costs,n,days[ind]+30,dp);
        return dp[ind] = min({c1,c2,c3});
    }
    
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        vector<int> dp(n+1,-1);
        int ans = minCost(days,costs,n,0,dp);
        return ans;
    }
};