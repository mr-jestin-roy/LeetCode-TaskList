#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;
int dp[100][100005];
int a[100];

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i <= a[0]; i++)
    {
        dp[0][i] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        vector<int> prefixSum(k + 1);
        prefixSum[0] = dp[i - 1][0];
        for (int j = 1; j < k + 1; j++)
        {
            prefixSum[j] = (prefixSum[j - 1] + dp[i - 1][j]) % M;
        }
        for (int j = 0; j < k + 1; j++)
        {
            if (j > a[i])
                dp[i][j] = (prefixSum[j] + M - prefixSum[j - a[i] - 1]) % M;
            else
                dp[i][j] = prefixSum[j];
        }
    }
    cout << dp[n - 1][k];
}