// Write an efficient algorithm that searches for a target value in an m x n integer matrix. The matrix has the following properties:

// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {

        int n = matrix.size();
        int m = matrix[0].size();

        int i = 0, j = m - 1;
        while (i < n && j >= 0)
        {
            if (matrix[i][j] == target)
                return true;
            if (matrix[i][j] > target)
                j--;
            else
                i++;
        }
        return false;
    }
};