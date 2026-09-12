#include <bits/stdc++.h>
using namespace std;
int bad_pairs[200005];

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tests, len, queries, left, right, max_operations;
    string garland;
    cin >> tests;
    while(cin>> len >> queries>> garland){
        for(int i = 1; i <len; i++){
            bad_pairs[i+1] = bad_pairs[i] + (garland[i]  == garland[i-1]);
        }
        while(queries-- && cin>> left >> right >> max_operations){
            cout << ((bad_pairs[right] - bad_pairs[left] + 1) / 2 <= max_operations ? "YES\n" : "NO\n");
    }
    }
return 0;
}
