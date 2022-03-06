class Solution {
public:
    int maxStudents(vector<vector<char>>& seats) {
        int m = seats.size();
        int n = seats[0].size();
        vector<int> validity; // the validity of each row in the classroom
        for (int i = 0; i < m; ++i) {
            int cur = 0;
            for (int j = 0; j < n; ++j) {
				// the j-th bit is 1 if and only if the j-th seat is not broken
				// here the 0th bit is the most significant bit
                cur = cur * 2 + (seats[i][j] == '.');
            }
            validity.push_back(cur);
        }
		
		// all the f states are set -1 as invalid states in the beginning
		// here f[i][mask] represents the first i-1 rows to handle corner cases
        vector<vector<int>> f(m + 1, vector<int>(1 << n, -1));
		// f[0][0] is a valid state
		// think of a virtual row in the front and no students are sitting in that row
        f[0][0] = 0;
        for (int i = 1; i <= m; ++i) {
            int valid = validity[i - 1];
			// the interval [0, 1 << n) includes all the n-bit states for a row of students
			// please note that state 0 represents no student sitting in this row
			// which is always a valid state
            for (int j = 0; j < (1 << n); ++j) {
				// (j & valid) == j: check if j is a subset of valid
				// !(j & (j >> 1)): check if there is no adjancent students in the row
                if ((j & valid) == j && !(j & (j >> 1))) {
					// f[i][j] may transit from f[i -1][k]
                    for (int k = 0; k < (1 << n); ++k) {
						// !(j & (k >> 1)): no students in the upper left positions
						// !((j >> 1) & k): no students in the upper right positions
						// f[i - 1][k] != -1: the previous state is valid
                        if (!(j & (k >> 1)) && !((j >> 1) & k) && f[i - 1][k] != -1) {
                            f[i][j] = max(f[i][j], f[i - 1][k] + __builtin_popcount(j));
                        }
                    }
                }
            }
        }
        
		// the answer is the maximum among all f[m][mask]
        return *max_element(f[m].begin(), f[m].end());
    }
};