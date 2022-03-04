class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        double res[102][102] = {0.0};
        res[0][0] = poured;
        for(int i=0;i < 100;i++){
            for(int j=0;j<=i;j++){
                if(res[i][j] > 1){//if overflowing then go to the next deeper level
                    res[i+1][j] += (res[i][j] - 1)/2.0;
                    res[i+1][j+1] += (res[i][j] - 1)/2.0;
                    res[i][j] = 1;
                }
            }
        }
        return res[query_row][query_glass];
    }
};