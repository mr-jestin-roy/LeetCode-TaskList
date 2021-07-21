//ITERATIVE SOLUTION WITH STACK
vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> st;
        if(!root) return res;
        st.push(root);
        while(!st.empty()){
            root = st.top();    st.pop();
            res.push_back(root->val);
            if(root->right)
                st.push(root->right);
            if(root->left)
                st.push(root->left);
        }
        return res;
    }

//WITH RECURSION
vector<int> preorder(TreeNode* root,vector<int> &res){
        if(root == NULL) return res;
        res.push_back(root->val);
        preorder(root->left,res);
        preorder(root->right,res);
        return res;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        preorder(root,res);
        return res;
    }