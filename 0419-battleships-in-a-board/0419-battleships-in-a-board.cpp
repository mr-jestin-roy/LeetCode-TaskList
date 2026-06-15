class Solution {
public:
    void dfs(vector<vector<char>>& board, vector<vector<bool>>& visited, int r, int c, int rows, int cols){
        // //Base case check
        // out of bounds, 
        // already visited 
        // it is 
        if(r < 0 || r >= rows || c < 0 || c >= cols || visited[r][c] || board[r][c] == '.') return;

        visited[r][c] = true;

        dfs(board, visited, r+1, c, rows, cols); // Down
        dfs(board, visited, r-1, c, rows, cols); // UP
        dfs(board, visited, r, c+1, rows, cols); // right
        dfs(board, visited, r, c-1, rows, cols); // left
    }

    int countBattleships(vector<vector<char>>& board) {
        if(board.empty() || board[0].empty())  return 0;
        int countHeads = 0, rows = board.size(), cols = board[0].size();
        // initialise the visited matrix and populate it with false
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));

        for(int i=0; i < rows; i++){
            for(int j=0; j< cols; j++){
                if(board[i][j] == 'X' && !visited[i][j]){
                    countHeads++;

                    //visit the entire ship using DFS
                    dfs(board, visited, i, j, rows, cols);
                }
            }
        }

        return countHeads;
    }
};