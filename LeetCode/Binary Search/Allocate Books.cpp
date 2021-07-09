//Approach Time Complexity O()

int isPossible(vector<int> &A, int pages, int students)
{
    int cnt = 0, sumallocated = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (sumallocated + A[i] > pages)
        {
            cnt++;
            sumallocated = A[i];
        }
        else
        {
            sumallocated += A[i];
        }
        if (sumallocated > pages)
            return false;
    }
    if (cnt < students)
        return true;
    return false;
}
int Solution::books(vector<int> &A, int B)
{
    if (B > A.size())
        return -1;

    int low = A[0], high = 0;
    for (int i = 0; i < A.size(); i++)
    {
        high = high + A[i];
        low = min(low, A[i]);
    }
    int res = -1;
    while (low <= high)
    {
        int mid = (low + high) >> 1;
        if (isPossible(A, mid, B))
        {
            res = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low; ///or return low;
}
