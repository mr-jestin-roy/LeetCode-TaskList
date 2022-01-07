#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define mod 998244353
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define inf 1e18
int arr[3];
void getNumberFromString(string s) {
   stringstream str_strm;
   str_strm << s; //convert the string s into stringstream
   string temp_str;
   int temp_int;
   while(!str_strm.eof()) {
      str_strm >> temp_str; //take words into temp_str one by one
      if(stringstream(temp_str) >> temp_int) { //try to convert string to int
         cout << temp_int << " ";
      }
      temp_str = ""; //clear temp string
   }
}
vector<string> days= {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
string dayOfTheWeek(int d, int m, int y, int c = 0) {
        if (m < 3) m += 12, y -= 1;
        c = y / 100, y = y % 100;
        int w = (c / 4 - 2 * c + y + y / 4 + 13 * (m + 1) / 5 + d - 1) % 7;
        return days[(w + 7) % 7];
    }

void solve()
{
    string s;
    cin>>s;
    getNumberFromString(s);
    int d,m,y;
   d = arr[0];
   m = arr[1];
   y = arr[2];
    cout<<dayOfTheWeek(d,m,y)<<endl;

    
}


int32_t main()
{
    fast;
    cout << fixed << setprecision(20);
    int t = 1;
    // cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "Case #" << tt << ": ";
        solve();
    }
}


