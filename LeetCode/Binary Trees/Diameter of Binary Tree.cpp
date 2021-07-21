class Solution {
public:
    int helper(TreeNode* root,int &d){
        if(root== NULL) return 0;
        int ldepth = helper(root->left,d);
        int rdepth = helper(root->right,d);
        d = max(ldepth+rdepth,d);
        return max(ldepth,rdepth) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int dia = 0;
        helper(root,dia);
        return dia;
    }
};