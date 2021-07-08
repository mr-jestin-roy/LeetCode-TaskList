// Given a matrix of integers A of size N x M in which each row is sorted.
// Find an return the overall median of the matrix A.
int countSmallerEqualtoMid(vector<int> &row, int mid)
{
    int l = 0, h = row.size() - 1;
    while (l <= h)
    {
        int md = (l + h) / 2;
        if (row[md] <= mid)
        {
            l = md + 1;
        }
        else
        {
            h = md - 1;
        }
    }
    return l;
}

int Solution::findMedian(vector<vector<int>> &A)
{
    int low = 1;
    int high = 1e9;
    int n = A.size();
    int m = A[0].size();
    while (low <= high)
    {
        int mid = (low + high) >> 1;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += countSmallerEqualtoMid(A[i], mid);
        }

        if (cnt <= (n * m) / 2)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}
