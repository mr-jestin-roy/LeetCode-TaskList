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