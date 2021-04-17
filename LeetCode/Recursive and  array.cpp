#include <bits/stdc++.h>
using namespace std;

bool is_sorted(int a[], int size) {
    if (size == 0 || size == 1) {
        return 1;
    }
    if (a[0] > a[1]) {
        return false;
    }
    bool is_Smallsorted = is_sorted(a + 1, size - 1);
    return is_Smallsorted;

}

int main() {
    int arr[] = {2, 10, 6, 10, 11};
    if (is_sorted(arr, 5)) {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}