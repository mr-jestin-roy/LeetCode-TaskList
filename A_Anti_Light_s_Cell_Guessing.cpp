#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long 
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
void solve(){
    int m,n;
        cin >> m >> n;
        if(max(m,n) == 1){
            cout << "0" << endl;
            return;
        }
        else if(min(m,n) == 1)
        {    cout << "1" << endl;
            return;
        }
        else{
            cout << "2" << endl;
            return;
        }
}


int main()
{
    fast;
    cout << fixed << setprecision(20);

    int t = 1;
    cin >> t;
    auto ten = [](int x) -> long long {
		long long ans = 1;
		while (x--) {
			ans *= 10;
		}
		return ans;
	};
    for (int tt = 1; tt <= t; tt++)
    {
        solve();
    }
    return 0;
}
