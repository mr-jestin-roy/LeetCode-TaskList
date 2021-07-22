int fibonacii(int n)
{
    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[n];
    //recursion
    // if(n<=1)
    //  return n;
    //  return fibonacii(n-1)+fibonacii(n-2);
}
int main()
{
    int n;
    cin >> n;
    cout << fibonacii(n) << endl;
}

//Hop Game      DYNAMMIC PROGRAMMING
int hop(int arr, int n, int ind, int factor, int triple_hop_flag)
{
    if (ind >= n)
        return 0;
    int score = factor * arr[ind];

    int singlehop = hop(arr, n, i + 1, 1, triple_hop_flag);
    int doublehop = hop(arr, n, i + 2, 2, triple_hop_flag);
    int triplehop;

    if (triple_hop_flag)
        triplehop = hop(arr, n, i + 3, 3, false);
    else
        triplehop = 0;

    int biggestjump = max(singlehop, max(doublehop, triplehop));
    int maxscore = score + biggestjump;
    return maxscore;
}
int main()
{
    int arr[2, 4, 3, 6, 4, 8, 1];
    int n = arr.size();
    cout << hop(arr, n, 0, 1, true);
    return 0;
}

//missing point in parllelogram
pair<int, int> missingpoint(int ax, int ay, int bx, int by, int cx, int cy)
{
    pair<int, int> res;
    //since AD = BC
    //(Dx - Ax, Dy - Ay) = (Cx - Bx, Cy - By)
    res.first = ax + cx - bx;
    res.second = ay + cy - by;
    return res;
}

//another approach  DIAGONALS BISECT EACH OTHER

void missingpoint(pair<int, int> A, pair<int, int> B, pair<int, int> C)
{
    pair<int, int> D1 = {A[0] + B[0] - C[0], A[1] + B[1] - C[1]};
    pair<int, int> D2 = {A[0] + C[0] - B[0], A[1] + C[1] - B[1]};
    pair<int, int> D3 = {C[0] + B[0] - A[0], C[1] + B[1] - A[1]};
    vector<pair<int, int>> vect = {D1, D2, D3};
    sort(vect.begin(), vect.end());
    return vect[0];
}

//Minimum steps to make the product of the array equal to 1
int minStep(int arr[], int n)
{
    int pos = 0, neg = 0, zero = 0;
    int step = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zero++;
        else if (arr[i] > 0)
        {
            pos++;
            steps += abs(arr[i] - 1);
        }
        else
        {
            neg++;
            steps += abs(-1 - arr[i]);
        }
    }
    if (neg & 1)
    {
        if (zero > 0)
            steps += zero;
        else
            steps += 2;
    }
    else
    {
        steps += zero;
    }
    return steps
}

//DOG WALKER        IEEE XTREME
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> dogs(n);
        for (auto &i : dogs)
            cin >> i;
        sort(dogs.begin(), dogs.end());

        vector<int> diff(n - 1);
        for (int j = 0; j < n - 1; j++)
        {
            diff[j] = dogs[j + 1] - dogs[j];
        }
        sort(diff.begin(), diff.end());

        int res = dogs[n - 1] - dogs[0];
        if (k != 1)
        {
            res = accumulate(diff.begin() + n - k, diff.end(), res, minus<int>());
        }
        cout << res << endl;
    }
}