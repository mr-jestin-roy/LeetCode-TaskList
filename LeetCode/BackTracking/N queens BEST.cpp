//using Hash Table,time complexity of O(n);

class Solution {
public:
    void solve(int col,vector<string> &board,vector<vector<string>> & ans,vector<int> &LR,vector<int> &UD,vector<int> &LD, int n){
        if(col == n)
        {
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(LR[row]==0 && LD[row+col]==0 && UD[n-1 + col - row] == 0){
        
                board[row][col] = 'Q';
                LR[row]=1, LD[row+col]=1, UD[n-1+col-row] =1;
                
                solve(col+1,board,ans,LR,UD,LD,n);
                
                board[row][col] = '.';
                LR[row] =0, LD[row + col]=0, UD[n-1+col-row]=0;
            }
        }
    }    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i] = s;
        }
        vector<int> LR(n,0), UD(2*n - 1,0), LD(2*n - 1,0);
        solve(0,board,ans,LR,UD,LD,n);
        return ans;
    }
};