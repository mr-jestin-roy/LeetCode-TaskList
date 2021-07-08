//NEWTON'S METHOD
// r= 0.5*(r + x/r);

class Solution
{
public:
    int mySqrt(int x)
    {
        double r = x;
        while ((r * r - x) > 0.001)
        {
            r = (r + x / r) / 2;
        }
        return r;
    }
};