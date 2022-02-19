class Solution {
public:
    int numberOfSteps(int num) {
        int moves = 0, target = num;
        
        while(target > 0) {
            //If target is even, greedily divide by 2 and reduce doubling moves by 1.
            if(target % 2 == 0) {
                target = target / 2;
            } else {
                //target is odd, reduce 1 to make it even.
                target--;
            }
            
            //Increment moves
            moves++;
        }
        //If we have run out of doubling moves, only weay to reach '1', it to decrement target by '1' in each step which is basically 'target' steps in total
        return moves;
    }
};