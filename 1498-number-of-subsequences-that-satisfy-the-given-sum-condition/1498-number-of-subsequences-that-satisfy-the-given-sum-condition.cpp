class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        //Two sum method & Pointer approach 
        auto A = nums;
    sort(A.begin(), A.end());
    int res = 0, n = A.size(), l = 0, r = n - 1, mod = 1e9 + 7;
    vector<int> pows(n, 1);
    for (int i = 1; i < n; ++i)
        pows[i] = pows[i - 1] * 2 % mod;
    while (l <= r)
    {
        if (A[l] + A[r] > target)
        {
            r--;
        }
        else
        {
            res = (res + pows[r - l++]) % mod;
        }
    }
    return res;
    }
};