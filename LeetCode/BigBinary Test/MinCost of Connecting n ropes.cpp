#include <bits/stdc++.h>
using namespace std;

int minCost(int &arr,int n){
    sort(arr,arr+n);
    int sum =0;
    sum += arr[0]*(n-1);

    for(int i=1;i<n;i++){
        sum += arr[i]*(n-i);
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<minCost(arr,n);
}