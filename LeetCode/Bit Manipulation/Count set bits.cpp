// Method 1 (Simple)
// A simple solution is to run a loop from 1 to n and sum the count of set bits in all numbers from 1 to n.

int Solution::solve(int A)
{
    if (A == 0)
        return 0;
    long long p = 0, ans = 0;
    while (pow(2, p) <= A)
        p++;
    p--;
    ans += p * pow(2, p - 1) + (A - pow(2, p) + 1) + solve(A - pow(2, p));
    ans %= 1000000007;
    return ans;
}
