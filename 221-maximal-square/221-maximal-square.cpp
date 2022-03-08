class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.empty())
            return 0;
        vector<vector<int>> dp(matrix.size(), vector<int>(matrix[0].size(),0));
        int result =0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++)
            {
                if (!i || !j || matrix[i][j] == '0') {
                    dp[i][j] = matrix[i][j] - '0';
                } 
                else if(matrix[i][j] == '1'){
                    dp[i][j] = 1 + min({dp[i][j-1], dp[i-1][j], dp[i-1][j-1]});
                }
                //update the max square
                result = max(dp[i][j], result);
                
            }
        }
        return result*result;
    }
};