    void dfs(TreeNode* node,int depth,int &height,int &res){
        if(!node) return;
        
        if(depth > height){
            res = node->val;
            height = depth;          // update res only when redefine the height
        }
        dfs(node->left,depth+1,height,res);
        dfs(node->right,depth+1,height,res);
    }
    
    int findBottomLeftValue(TreeNode* root) {
        int bottomleft =0;
        int height=0;
        dfs(root,1,height,bottomleft);
        return bottomleft;
    }