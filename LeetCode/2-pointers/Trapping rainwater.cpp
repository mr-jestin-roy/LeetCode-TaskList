// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int res = 0;
        int lmax = 0, rmax = 0;
        while (left <= right)
        {
            if (height[left] <= height[right])
            {

                if (height[left] >= lmax)
                    lmax = height[left];
                else
                    res += lmax - height[left];

                left++;
            }
            else
            {

                if (height[right] >= rmax)
                    rmax = height[right];
                else
                    res += rmax - height[right];

                right--;
            }
        }
        return res;
    }
};


//brute force method
int trappingwater(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n-1; i++) {
        int left = arr[i];
        for (int j=0; j<i; j++)
           left = max(left, arr[j]);

        int right = arr[i];
        for (int j=i+1; j<n; j++)
           right = max(right, arr[j]);
 
       res = res + (min(left, right) - arr[i]);  
    }
 
    return res;
}

def decToBinary(n):
    for i in range(31, -1, -1):
        k = n >> i;
        if (k & 1):
            print("1", end = "");
        else:
            print("0", end = "");