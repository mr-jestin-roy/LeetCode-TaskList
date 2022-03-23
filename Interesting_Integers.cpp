// Author: Jestin Roy
// Handle Name: jestinroy3
#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
void google(int t)
{
    cout << "Case #" << t << ": ";
}

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

// asumptions for the question
// on multidimensional array dp
ll dp[14][101][101][2][2];
int required = 0;
ll helper3(int index, int sum, int product, int tight, int started, string &a)
{
    if (sum > required)
        return 0;
    if (index == sz(a))
    {
        if ((sum == required) && (product == 0) && (started == 1))
        {
            return 1;
        }
        return 0;
    }
    if (dp[index][sum][product][tight][started] != -1)
        return dp[index][sum][product][tight][started];
    ll ans = 0;
    int maxAllowed = (tight == 1) ? a[index] - '0' : 9;
    for (int i = 0; i <= maxAllowed; i++)
    {
        int newSum = sum + i;
        int newStarted = (started || (i != 0)) ? 1 : 0;
        int newProduct = newStarted ? ((product * i) % required) : product;
        int newTight = (tight && (i == maxAllowed)) ? 1 : 0;
        ans += helper3(index + 1, newSum, newProduct, newTight, newStarted, a);
    }
    dp[index][sum][product][tight][started] = ans;
    return ans;
}
ll helper2(string a, int sum)
{
    required = sum;
    for (int i = 0; i <= a.length(); i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            for (int k = 0; k <= sum; k++)
            {
                dp[i][j][k][0][0] = -1;
                dp[i][j][k][0][1] = -1;
                dp[i][j][k][1][0] = -1;
                dp[i][j][k][1][1] = -1;
            }
        }
    }
    return helper3(0, 0, 1, 1, 0, a);
}
ll helper(ll n)
{
    string x = to_string(n);
    ll ans = 0;
    for (int i = 1; i <= 100; i++)
    {
        ans += helper2(x, i);
    }
    return ans;
}
void solve()
{
    ll a, b;
    cin >> a >> b;
    cout << helper(b) - helper(a - 1) << nline;
}

int main()
{

    fastio();

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        google(i);
        solve();
    }
}

// Brute force method
//  bool found(int x)
//  {
//      int sum = 0, product = 1;
//      while (x > 0)
//      {
//          sum += (x % 10);
//          product *= (x % 10);
//          x /= 10;
//      }
//      return ((product % sum) == 0);
//  }
//  int helper(int n)
//  {
//      int ans = 0;
//      for (int i = 1; i <= n; i++)
//      {
//          if (found(i))
//          {
//              ans++;
//          }
//      }
//      return ans;
//  }
//  void solve()
//  {
//      // start solving the problem from here on
//      int a, b;
//      cin >> a >> b;
//      assert(b <= 1e6);
//      cout << helper(b) - helper(a - 1) << endl;
//  }