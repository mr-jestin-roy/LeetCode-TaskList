// Created by Jestin Roy
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define endl "\n"

int N = 1e7 + 2;
vector<bool> prime(N, true);
vector<int> prefix_prime(N);

void sieve()
{ //to compute whether each number as prime or not
    prime[0] = prime[1] = false;
    int i, j;
    for (i = 2; i * i <= N; i++)
    {
        for (j = i * i; j <= N; j += i)
            prime[j] = false;
    }
}

void preCompute()
{ //to compute the no. of primes before a number
    int i, cnt = 0;
    for (i = 1; i <= N; i++)
    {
        if (prime[i])
            cnt++;
        prefix_prime[i] = cnt;
    }
}

int32_t main()
{
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    sieve();
    preCompute();

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 2)
            cout << 1 << endl;
        else if (n == 3)
            cout << 2 << endl;
        else
        {
            int lim = n / 2;
            int extra = prefix_prime[n] - prefix_prime[lim];
            int groups = 1 + extra;
            cout << groups << endl;
        }
    }
}