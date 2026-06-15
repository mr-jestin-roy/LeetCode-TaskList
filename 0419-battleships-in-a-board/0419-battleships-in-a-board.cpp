class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        if(board.empty() || board[0].empty())  return 0;
        int countHeads = 0, rows = board.size(), cols = board[0].size();
        // O(1) pass space compelxity
        for(int i=0; i < rows; i++){
            for(int j=0; j< cols; j++){
                if(board[i][j] == 'X'){
                    if(i > 0 && board[i-1][j] == 'X')   continue;
                    if(j > 0 && board[i][j-1] == 'X')   continue;

                    countHeads++;
                }
            }
        }

        return countHeads;
    }
};