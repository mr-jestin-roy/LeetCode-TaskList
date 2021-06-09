class Solution {
public:
    int integerBreak(int n) {
        if (n <= 3)
            return n - 1;
        int num_threes, num_twos;
        num_threes = n / 3;
        int remainder;
        remainder = n % 3;
        if (remainder == 1)
        {
            num_threes -= 1;
            num_twos = 2;
        }
        else if (remainder == 2) {
            num_twos = 1;
        }
        else {
            num_twos = 0;
        }
        return pow(2, num_twos) * pow(3, num_threes);
    }
};