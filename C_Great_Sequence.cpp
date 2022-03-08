#pragma GCC optimize("Ofast")
#include "bits/stdc++.h"
using namespace std;
#define int long long
#define all(x) (x).begin(), (x).end()



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
#ifdef SIEVE
    sieve();
#endif
#ifdef NCR
    init();
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n); 
        for(auto &i:arr)
            cin >> i;

        //WE USE MULTISET BECAUSE IT WORKS LIKE SET BUT ALLOWS DUPLICATES
        multiset<int> s;
        sort(all(arr));
        for(auto v:arr){
            //removed multiples OR duplicates
            if(v%x == 0 && s.find(v/x) != s.end()){
                s.erase(s.find(v / x));
            }
            else{
                //else we insert the number for furure pairing
                s.insert(v);
            }
        }
        cout << s.size() << endl;
    }
    return 0;
}
