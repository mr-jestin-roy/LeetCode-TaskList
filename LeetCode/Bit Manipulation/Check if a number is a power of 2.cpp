#include <bits/stdc++.h>
using namespace std;
//USING BIT MANIPULATION o(1)
bool isPowerOfTwo(int n)
{
    return n && (!(n & (n - 1)));
}
// 16 --> 10000         N AND N-1 is = 0
// 15 --> 01111

//O(1) TC
// bool isPowerOfTwo(int n){
//     if(n==0)
//         return false;

//     return (ceil(log2(n))==floor(log2(n)));
// }

//O(log2(N)) TC
// bool isPowerOfTwo(int n){
//     if(n==0)
//         return false;
//     while(n!=1){
//         if(n%2!=0)
//             return false;

//         n = n/2;
//     }
//     return true;
// }

int main()
{
    isPowerOfTwo(31) ? cout << "YES" << endl : cout << "NO" << endl;
    isPowerOfTwo(31) ? cout << "YES" << endl : cout << "NO" << endl;
}