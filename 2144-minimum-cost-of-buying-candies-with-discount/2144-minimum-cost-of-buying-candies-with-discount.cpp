class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int sum =0;
        
        for(auto i : cost)
            sum += i;
        sort(cost.begin(),cost.end());
        if(cost.size() > 2){
            for(int i=cost.size()-3;i>=0; i-=3){
            sum -= cost[i];    
        }
        }
        
        return sum;
    }
};