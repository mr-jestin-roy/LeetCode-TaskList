//User function Template for C
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void threeWayPartition(int arr[], int n, int a, int b)
{
    int l = 0;
    int r = n - 1;
    for (int i = 0; i <= r;)
    {
        if (arr[i] < a)
        {
            swap(&arr[i], &arr[l]);
            l++;
            i++;
        }
        else if (arr[i] > b)
        {
            swap(&arr[i], &arr[r]);
            r--;

        }
        else
            i++;
    }
}