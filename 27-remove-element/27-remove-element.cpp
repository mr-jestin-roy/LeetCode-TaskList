class Solution {
public:
    //TWO POINTER METHOD - O(N)
    int removeElement(vector<int>& nums, int val) {
        int left = 0 , right = nums.size() - 1;
        while(left <= right){
            if(nums[left] == val){
                swap(nums[left], nums[right]);
                right--;
            }
            else
                left++;
        }
        return left;
    }
};
//STANDARD C++ STL QUESTION
// int removeElement(vector<int>& nums, int val) {
//         nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
//         return nums.size();
//     }