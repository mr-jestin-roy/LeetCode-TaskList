//METHOD 1 

int Solution::solve(vector<int> &A) {
    priority_queue <int, vector<int>, greater<int>> pq;
    int cost = 0;
    for(auto i: A){
        pq.push(i);
    }
    while(pq.size() != 1){
        int l1 = pq.top();
        pq.pop();
        int l2 = pq.top();
        pq.pop();
        cost += l1 + l2;
        pq.push(l1+l2);
    }
    return cost;
}


// METHOD 2
// #include <bits/stdc++.h>
// using namespace std;

// int minCost(int &arr,int n){
//     sort(arr,arr+n);
//     int sum =0;
//     sum += arr[0]*(n-1);

//     for(int i=1;i<n;i++){
//         sum += arr[i]*(n-i);
//     }
//     return sum;
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<minCost(arr,n);
// }