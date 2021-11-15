#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define int long long 
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define MAX 1e15


int NumberOfWays(vector<int> &arr,int n,int value){
    int minWays = INT_MAX;
    int currSum =0;
    int i=0,j=0;
    bool flag = false;
    while(i<n)
    {
        currSum += arr[i];
        if(currSum == value){
            minWays = min(minWays, ((n - (i + 1)) + j));
            flag = true;
        }
        else if(currSum > value){

            while(currSum > value)
                currSum -= arr[j++];
            
            if(currSum == value){
                minWays = min(minWays, ((n - (i + 1)) + j));
                flag = true;
            }
        }
        i++;
    }
    if(!flag)
        return -1;
    else{
        return minWays;
    }
}



void solve(){
    int n,sum;
	cin >>n>>sum;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<NumberOfWays(arr,n,sum)<<endl;
    
}
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int t=1;
	// cin>>t;
	while(t--){
        solve();
    }
	return 0;
}
