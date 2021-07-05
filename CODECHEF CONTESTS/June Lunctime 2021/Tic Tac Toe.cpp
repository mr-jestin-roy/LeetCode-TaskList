#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define ll long long int
#define endl "\n"

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        int n, m, k, i, j;
        cin >> n >> m >> k;
        vector<pair<int, int>> moves;
        for (int i = 0; i < n * m; i++)
        {
            int x, y;
            cin >> x >> y;
            moves.push_back({x, y});
        }
        //start binary search
        int low = 0, high = n * m - 1, ans = n * m;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int a[n + 1][m + 1];
            for (i = 0; i <= n; i++)
            {
                for (j = 0; j <= m; j++)
                    a[i][j] = 0;
            }

            //populate upto 'mid' moves
            for (i = 0; i <= mid; i++)
            {
                if (i % 2 == 0)
                    a[moves[i].first][moves[i].second] = 1;
                else
                    a[moves[i].first][moves[i].second] = -1;
            }

            //prefix sum
            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= m; j++)
                    a[i][j] += a[i][j - 1] + a[i - 1][j] - a[i - 1][j - 1];
            }

            bool found = false;
            //sum of k*k grid with bottom right corner (i,j)
            for (i = k; i <= n; i++)
            {
                for (j = k; j <= m; j++)
                {
                    int cnt = a[i][j] - a[i - k][j] - a[i][j - k] + a[i - k][j - k];

                    if (abs(cnt) == k * k)
                        found = true;
                }
            }

            if (found)
            {
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        if (ans == n * m)
            cout << "Draw" << endl;
        else if (ans % 2 == 0)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
    return 0;
}
