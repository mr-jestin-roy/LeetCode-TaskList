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
    //ITERATIVE METHOD
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        
        if(!root->left && !root->right) //TRUE if it is a single tree
            return true;
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(root);
        TreeNode* leftNode, *rightNode;
        
        while(!q.empty()){
            leftNode = q.front(); q.pop();
            rightNode = q.front(); q.pop();
            
            //both nodes exists , but have different values
            if(leftNode->val != rightNode->val)  
                return false;
            
            if(leftNode->left && rightNode->right){
                q.push(leftNode->left);
                q.push(rightNode->right);
            }
            else if(leftNode->left || rightNode->right) //if only one child is present alone in the tree
            {   return false;}
            
            
            if(leftNode->right && rightNode->left){
                q.push(leftNode->right);
                q.push(rightNode->left);
            }
            else if(leftNode->right || rightNode->left) //if only one child is present alone in the tree
            {   return false;   }
        }
        return true;
    }
};
//  //Recursive Approach
//     bool SymmetricHelper(TreeNode* root1, TreeNode* root2)
//     {
//         if(root1==NULL && root2 == NULL)
//             return true;
        
//         if(root1 && root2 && root1->val == root2->val){
//             return SymmetricHelper(root1->left, root2->right) && SymmetricHelper(root1->right, root2->left);
//         }
        
//         return false;
//     }
//     bool isSymmetric(TreeNode* root) {
//         return SymmetricHelper(root, root);
//     }