class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool ascending = true, descending = true;
        int size = A.size() - 1;

        for (int i = 0; i < size; i++)
        {
            if (ascending && A[i] > A[i + 1]) {
                ascending = false;
            }

            if (descending && A[i] < A[i + 1]) {
                descending = false;
            }
        }

        return ascending || descending;
    }
};