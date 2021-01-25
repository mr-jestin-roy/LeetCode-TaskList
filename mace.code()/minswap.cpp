#include<bits/stdc++.h>
using namespace std;

int a[100005];
bool visited[100005];

int solve(int n)
{
    pair<int, int> p[n];

    for (int i = 0; i < n; i++)
    {
        p[i].first = a[i];

        // Storing the original position of a[i]
        p[i].second = i;
    }

    sort(p, p + n);
    int ans = 0;

    for (int i = 0; i < n; i++)
    {


        if (visited[i] || p[i].second == i)
            continue;

        int cycle_size = 0;
        int j = i;

        while (!visited[j])
        {
            visited[j] = 1;
            j = p[j].second;
            cycle_size++;
        }

        ans += (cycle_size - 1);
    }

    return ans;

}

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = solve(n);
    printf("%d\n", ans);
    return 0;

}