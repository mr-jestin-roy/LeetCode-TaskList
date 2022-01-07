#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long 
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846



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
        int m,n;
        int a,b;
        cin >> a >> m;
        cin >> b >> n;
        int temp = min(m, n);
        m -= temp;
        n -= temp;
        if(m >= 10){
            cout << ">" << endl;
        }
        else if(n >= 10){
            cout << "<" << endl;
        }
        else{
            long long y1 = a * ten(m);
            long long y2 = b * ten(n);
            if(y1 > y2){
                cout << ">" << endl;
            }
            else if(y1 < y2){
                cout << "<" << endl;
            }
            else{
                cout << "=" << endl;
            }
        }
    
    }
    return 0;
}
