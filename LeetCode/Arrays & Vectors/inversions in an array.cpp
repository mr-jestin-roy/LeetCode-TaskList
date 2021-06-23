class Solution
{
public:
    void mergeSort(int left, int right, vector<pair<int, int>> &nums, vector<int> &ans, vector<pair<int, int>> &temp)
    {
        int mid = (left + right) / 2;

        mergeSort(left, mid, nums, ans, temp);
        mergeSort(mid + 1, right, nums, ans, temp);

        int i, j, k;
        i = left;
        j = mid + 1;
        k = left;
        int inv_count = 0;

        while (i <= mid && j <= right)
        {
            if (nums[i] < nums[j])
            {
                ans[nums[i].second] += inv_count;
                temp[k++] = nums[j++];
            }
            else //smaller number to the right
            {
                temp[k++] = nums[j++];
                inv_count++;
            }
        }

        while (i <= mid)
        {
            ans[nums[i++].second] += inv_count;
            temp[k++] = nums[i++];
        }

        while (j <= right)
            temp[k++] = nums[j++];

        for (int i = left; i <= right; i++)
            nums[i] = temp[i];
    }
    vector<int> countSmaller(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n, 0);
        vector<pair<int, int>> temp;
        vector<pair<int, int>> newNums; //{nums,original_index}

        for (int i = 0; i < n; i++)
        {
            newNums.push_back({nums[i], i});
            temp.push_back({nums[i], i});
        }
        mergeSort(0, n - 1, newNums, ans, temp);

        return ans;
    }
};