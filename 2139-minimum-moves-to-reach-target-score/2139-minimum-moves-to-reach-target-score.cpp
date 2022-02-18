class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int moves =0;
        while(target > 0 && maxDoubles >0){
            if(target%2){
                target -= 1;
            }
            else{
                target /= 2;
                maxDoubles -= 1;
            }
            moves++;
        }
        
        return moves + target - 1;
    }
};