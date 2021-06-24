// Brute force Approach O(N*M)
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        if (matrix.size() == 0)
            return false;

        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                if (matrix[i][j] == target)
                    return true;
        }
        return false;
    }
};

//Optimal approach using Binary search on the matrix
//O(log2(N*M))

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        if (matrix.size() == 0)
            return false;

        int n = matrix.size();
        int m = matrix[0].size();

        int low = 0;
        int high = (n * m) - 1;

        while (low <= high)
        {
            int mid = (low + (high - low) / 2);
            if (matrix[mid / m][mid % m] == target)
                return true;

            if (matrix[mid / m][mid % m] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return false;
    }
};
