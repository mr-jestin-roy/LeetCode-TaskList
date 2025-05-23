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
    bool isLeaf(TreeNode* root)
    {
        if(root == NULL)
            return false;
        if(root->left == NULL && root->right==NULL)
            return true;
        return false;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int result =0;
        if(root!=NULL){
            if(isLeaf(root->left))
                result += root->left->val;
            else
                result += sumOfLeftLeaves(root->left);
            
        result += sumOfLeftLeaves(root->right);
        }
        return result;
    }
};