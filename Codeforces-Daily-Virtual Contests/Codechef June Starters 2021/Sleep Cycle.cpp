#include <bits/stdc++.h>
#define NN 1001000

using namespace std;
using INT = long long;

char s[NN];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
#endif
    int T;
    cin >> T;
    while (T--)
    {
        int L, H;
        cin >> L >> H;
        scanf("%s", s + 1);
        int n = strlen(s + 1);
        int cnt = 0, ok = 0;
        //trick of the solution

        for (int i = 1; i <= n; i++)
        {
            if (s[i] == '1')
            {
                if (H <= cnt)
                {
                    ok = 1;
                    break;
                }
                if (H <= 2 * cnt)
                    H = 2 * (H - cnt);
                cnt = 0;
                continue;
            }
            cnt++;
        }
        if (H <= cnt)
            ok = 1;
        if (ok)
            puts("YES");
        else
            puts("NO");
    }
}