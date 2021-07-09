int findMSB(int n)
{
    int ans = 1;
    while (n != 1)
    {
        n = n >> 1;
        ans = ans << 1;
    }
    return ans;
}

int findMSB(int n)
{
    int x = (int)(log2(n));
    return (int)pow(2, x);
}