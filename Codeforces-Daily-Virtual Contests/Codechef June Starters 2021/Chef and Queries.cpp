#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (q--)
    {
        long long qnum;
        cin >> qnum;
        if (qnum == 1)
        {
            long long l, r, x;
            cin >> l >> r >> x;
            for (int i = l - 1; i < r; i++)
            { //important step
                a[i] = a[i] + ((x + i + 1 - l) * (x + i + 1 - l));
            }
        }
        if (qnum == 2)
        {
            long long y;
            cin >> y; //current pos element
            cout << a[y - 1] << endl;
        }
    }
    return 0;
}