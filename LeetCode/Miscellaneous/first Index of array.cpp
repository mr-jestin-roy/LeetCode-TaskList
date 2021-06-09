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
    else {
        return ans;
    }
}

int main()
{
    int arr[] = {3, 1, 4, 2, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 4;

//function call
    cout << firstIndex(arr, size - 1, x);
    return 0;

}

