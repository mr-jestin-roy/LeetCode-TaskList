#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
bool is_pow_of_2(unsigned value)
{
    int count = 0;
    for (unsigned shift = 0; shift < sizeof(value) * CHAR_BIT; ++shift) {
        if (value & 1 << shift)  // test if bit shift is set
            ++count;
        if (count > 1)      // if there a more than one bits set in value
            return false;  //  it cannot be a power of 2
    }

    return true;
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int even =0;
        for(int i=0;i<n;i++){
            if(__gcd(2,a[i]) == 2){
                even++;
            }
        }
        int x = 1 + ((n-1)/2);
        if(x <= even){
            cout<<"YES"<<endl;
        }
        else{
            cout<<x<<" "<<even<<endl;
        }
    }
}