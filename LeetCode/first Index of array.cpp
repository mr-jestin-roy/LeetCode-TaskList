#include <bits/stdc++.h>
using namespace std;


int firstIndex(int input[], int size, int x)
{
    if (size == 0) return -1;

    if (input[0] == x) return 0;

    int ans = firstIndex(input + 1, size - 1, x);

    if (ans != -1)
    {
        return ans + 1;
    }
    else
        return ans;

}