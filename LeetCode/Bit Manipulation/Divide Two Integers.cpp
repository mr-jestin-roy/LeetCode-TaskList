class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        long a = abs(dividend), b = abs(divisor), res = 0;
        while (a - b >= 0)
        {
            int x = 0;
            while ((a - (b << x << 1)) >= 0)
                x++;
            res += 1 << x;
            a -= b << x;
        }
        return (dividend > 0) == (divisor > 0) ? res : -res;
    }
};