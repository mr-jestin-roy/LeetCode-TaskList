class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size() != 1 && stones.size() != 0)
        {
            sort(stones.begin(), stones.end());
            int n = stones.size();
            int a = stones[n-1];
            int b = stones[n-2];
            
            if(a == b)
            {
                stones.pop_back();
                stones.pop_back(); // Both are destroyed
            }
            else
            {
                stones[n-2] = a - b;
                stones.pop_back();
            }
        }
        
        if(stones.size() == 0)
            return 0;
        
        return stones[0];
    }
};