#include <bits/stdc++.h>
using namespace std;


int lastIndex(int input[], int size, int x)
{
    if (size == 0) return -1;

    if (input[size] == x) {
        return size;
    }
    return lastIndex(input, size - 1, x);
}

int main()
{
    int arr[] = {3, 1, 4, 2, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 1;

//function call
    cout << lastIndex(arr, size - 1, x);
    return 0;

}

