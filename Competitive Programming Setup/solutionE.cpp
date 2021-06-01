#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin>>s;

        int c = count(s.begin(),s.end(),'*');

        if(c==0){
            cout<<0<<endl;
            continue;
        }

        vector<int> pos(c);
        int j=0;
        //STORING THE INDEXES OF SHEEPS IN THE STRING 
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                pos[j++] = i;
            }
        }

        for(int i=0;i<c;i++){
            pos[i] -= i;
        }

        nth_element(pos.begin(),pos.begin() + c /2,pos.end());

        long long ans =0;
        for(int &i:pos){
            ans += abs(i-pos[c/2]);
        }
        cout<<ans<<endl;
    }
    return 0;
}