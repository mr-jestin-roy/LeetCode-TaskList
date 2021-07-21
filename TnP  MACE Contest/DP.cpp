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