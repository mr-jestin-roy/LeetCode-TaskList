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
// Given the root of a binary tree, return the level order traversal of its nodes' values.
//  (i.e., from left to right, level by level).

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> result;
        if (!root)
            return result;

        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);
        vector<int> cur_vec;
        while (!q.empty())
        {
            TreeNode *t = q.front();
            q.pop();
            if (t == NULL)
            {
                result.push_back(cur_vec);
                cur_vec.resize(0);
                if (q.size() > 0)
                {
                    q.push(NULL);
                }
            }
            else
            {
                cur_vec.push_back(t->val);
                if (t->left)
                    q.push(t->left);
                if (t->right)
                    q.push(t->right);
            }
        }
        return result;
    }
};