#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15


void solve()
{
    int ha, da, hm, dm;
    cin >> ha >> da >> hm >> dm;
    int k, weaponUpgrade, armourUpgrade;
    cin >> k >> weaponUpgrade >> armourUpgrade;
    for (int i = 0; i <= k;i++){
        int j = k - i;
        int health = ha + i * armourUpgrade;
        int attack = da + j * weaponUpgrade;

        int requiredDamage = (hm + attack - 1) / attack;
        int possibleDamage = (health + dm - 1) / dm;

        if(requiredDamage <= possibleDamage){
            cout << "YES" << endl;
            return;
        }
    }
        cout << "NO" << endl;
}

int32_t main()
{
    fast;
    cout << fixed << setprecision(20);
    int t = 1;
    cin >> t;


        for (int tt = 1; tt <= t; tt++)
        {
            // cout << "Case #" << tt << ": ";
            solve();
        }
}
