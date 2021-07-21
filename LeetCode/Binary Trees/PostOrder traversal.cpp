//iterative solution
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> st;
        if(!root) return res;
        st.push(root);
        while(!st.empty()){
            root = st.top();    st.pop();
            res.push_back(root->val);
            if(root->left)
                st.push(root->left);
            if(root->right)
                st.push(root->right);
        }
        reverse(res.begin(),res.end());
        return res;
    }


//with recursion
    vector<int> postOrder(TreeNode* root,vector<int> &res) {
        if(root== NULL) return res;
        postOrder(root->left,res);
        postOrder(root->right,res);
        res.push_back(root->val);
        return res;
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        postOrder(root,res);
        return res;
    }