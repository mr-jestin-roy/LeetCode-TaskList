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
    bool isCousins(TreeNode* root, int x, int y,bool sibiling = false, bool cousin = false) {
        queue<TreeNode*> q,q1;
        q.push(root);
        while(!q.empty() && !cousin){
            while(!q.empty()){
                auto n = q.front();
                q.pop();
                if(n == NULL) sibiling = false;
                else{
                    if(n->val == x || n->val==y){
                        if(!cousin)
                            cousin = sibiling = true;
                        else
                            return !sibiling;
                    }
                    q1.push(n->left);
                    q1.push(n->right);
                    q1.push(NULL);
                }
            }
            swap(q,q1);
        }
        return false;
    }
};