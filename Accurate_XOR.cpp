#include <bits/stdc++.h>
using namespace std;
//#define ll lond long
void tony()
{
    int ram, shyam, sita, gita;
    cin >> ram >> shyam;
    int hulk[ram];
    set<pair<int, int>, greater<pair<int, int>>> p, q;
    vector<int> op(ram + 1, ram);
    for (int i = 0; i < shyam; i++)
    {
        cin >> sita >> gita;
        if (op[sita] > gita)
        {
            op[sita] = gita;
        }
    }
    for (int i = 1; i <= ram; i++)
    {
        p.insert({op[i], i});
        int bkk = -1;
    }
    for (int i = ram - 1; i >= 0; i--)
    {

        while (!p.empty() && p.begin()->first == i + 1)
        {
            int v = p.begin()->second;
            p.erase(p.begin());
            q.insert({v, op[v]});
        }
        if (q.empty())
        {
            cout << -1 << endl;
            return;
        }
        int v = q.begin()->first;
        q.erase(q.begin());
        hulk[i] = v;
    }
    for (int i = 0; i < ram; i++)
    {
        cout << hulk[i] << " ";
    }
    cout << endl;
}
int main()
{

    int te;
    cin >> te;
    for (int io = 0; io < te; io++)
    {
        tony();
    }
    return 0;
}