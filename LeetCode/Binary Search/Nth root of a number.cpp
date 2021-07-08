#include <bits/stdc++.h>
using namespace std;

double multiply(double number, int n)
{
    double ans = 1.0;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * number;
    }
    return ans;
}

double getNthRoot(int n, int m)
{
    double low = 1, high = m;
    double eps = 1e-6;

    while ((high - low) > eps)
    {
        double mid = (high + low) / 2.0;
        if (multiply(mid, n) < n)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    //here low == high print any of them
    cout << low << endl;
    //just to check
    cout << pow(m, (double)(1.0 / (double)n));
}

int main()
{
    int n, m;
    cin >> n >> m;
    getNthRoot(n, m);
    return 0;
}