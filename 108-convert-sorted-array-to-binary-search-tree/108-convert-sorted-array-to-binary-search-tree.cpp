/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    //Recursive Method
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0)
            return NULL;
        if(nums.size() == 1){
            return new TreeNode(nums[0]);
        }
        int middle = nums.size()/2;
        TreeNode* root = new TreeNode(nums[middle]);
        
        vector<int> leftTree(nums.begin(), nums.begin()+middle);
        vector<int> rightTree(nums.begin()+middle + 1, nums.end());
                              
        root->left = sortedArrayToBST(leftTree);
        root->right = sortedArrayToBST(rightTree);
                              
        return root;
    }
};