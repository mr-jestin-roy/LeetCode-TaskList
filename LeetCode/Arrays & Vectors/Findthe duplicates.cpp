// // Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// // There is only one repeated number in nums, return this repeated number.
// NO extra space & don't modify the array

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        //uses tortoise method & linked list cycle detection
        int slow = nums[0];
        int fast = nums[0];
        do
        {
            slow = nums[slow]; //moving slow by 1
            fast = nums[nums[fast]];
        } while (slow != fast); //1st collision

        fast = nums[0];
        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};