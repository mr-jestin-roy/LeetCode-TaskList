class Solution
{
public:
    int getSum(int a, int b)
    {
        int sum = a;
        long mask = 0xFFFFFFFF;
        while (b != 0)
        {
            sum = a ^ b;
            b = ((a & b) & mask) << 1;
            a = sum;
        }
        return sum;
    }
};