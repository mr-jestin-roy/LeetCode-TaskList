class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1);
        if(n==0)
        {
            return {0};
        }
        res[0] = 0;
        res[1] = 1;
        for(int i=2;i<=n;i++){
            if(i%2 == 0)//even
                res[i] = res[i/2];
            else
                res[i] = res[i/2] + 1;//we add 1 for the last bit
        }
        return res;
    }
};