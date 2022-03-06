class Solution {
public:
    int maxStudents(vector<vector<char>>& seats) {
        int m = seats.size();
        int n = seats[0].size();
        vector<int> validity;
        for(int i=0;i<m;i++){
            int cur =0;
            for(int j=0;j<n;j++){
                cur = cur*2 + (seats[i][j] =='.');
            }
            validity.push_back(cur);
        }
        
        vector<vector<int>> f(m+1, vector<int>(1<<n,-1));
        
        f[0][0] =0;
        for(int i=1;i<=m;i++){
            int valid = validity[i-1];
            
            for(int j=0;j < (1<<n);j++){
                if((j&valid) == j && !(j & (j>>1))){
                    
                    for(int k=0;k <(1<<n);k++){
                        if(!(j & (k>>1)) && !((j>>1) & k) &&f[i-1][k] != -1){
                            f[i][j] = max(f[i][j], f[i-1][k] + __builtin_popcount(j));
                        }
                    }
                }
            }
        }
        
        // the answer is the maximum among all f[m][mask]
        return *max_element(f[m].begin(), f[m].end());
    }
};