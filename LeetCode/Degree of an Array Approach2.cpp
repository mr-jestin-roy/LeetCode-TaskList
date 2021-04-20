class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int count[50000] = {0};
        int start_index[50000] = {0};
        int i, temp;
        int vec_len = nums.size();
        int degree = 0;
        int shortest_sub_array_len = 1;
        for (i = 0; i < vec_len; i++)
        {
            if (count[nums[i]] == 0)
            {
                count[nums[i]] = 1;
                degree = (degree < count[nums[i]]) ? count[nums[i]] : degree;
                start_index[nums[i]] = i;
            }
            else
            {
                count[nums[i]] += 1;
                if (degree < count[nums[i]])
                {
                    degree = count[nums[i]];
                    shortest_sub_array_len = i - start_index[nums[i]] + 1;
                }
                else if (degree == count[nums[i]])
                {
                    temp = i - start_index[nums[i]] + 1;
                    shortest_sub_array_len = (shortest_sub_array_len < temp) ? shortest_sub_array_len : temp;
                }
            }
        }
        return shortest_sub_array_len;
    }
};