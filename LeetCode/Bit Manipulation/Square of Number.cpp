// Find the square of a number without using multiplication or division operators
int square(int n)
{
    if (n == 0)
        return 0;
    if (n < 0)
    {
        n = -n;
    }

    // Get floor(n/2) using right shift
    int x = n >> 1;
    if (n & 1)
    {
        return ((square(x) << 2) + (x << 2) + 1);
    }
    else //if n is even
        return (square(x) << 2);
}

// HOW THIS WORKS
// If n is even, it can be written as
//   n = 2*x
//   n2 = (2*x)2 = 4*x2
// If n is odd, it can be written as
//   n = 2*x + 1
//   n2 = (2*x + 1)2 = 4*x2 + 4*x + 1