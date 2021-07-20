//RECURSIVE APPROACH
   void helper(TreeNode* root,vector<int> &res){
        if(root!=NULL){
            if(root->left!=NULL)
                helper(root->left,res);
            
            res.push_back(root->val);
            if(root->right!= NULL)
                helper(root->right,res);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        helper(root,res);
        return res;
        
    }

//Iterative approach
 vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nodes;
        stack<TreeNode*> s;
        while (root || !s.empty()) {
            while (root) {
                s.push(root);
                root = root -> left;
            }
            root = s.top();
            s.pop();
            nodes.push_back(root -> val);
            root = root -> right;
        }
        return nodes;
    }

    //MORRIS TRAVERSAL O(1) SPACE 
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nodes;
        while (root) {
            if (root -> left) {
                TreeNode* pre = root -> left;
                while (pre -> right && pre -> right != root) {
                    pre = pre -> right;
                }
                if (!pre -> right) {
                    pre -> right = root;
                    root = root -> left;
                } else {
                    pre -> right = NULL;
                    nodes.push_back(root -> val);
                    root = root -> right;
                }
            } else {
                nodes.push_back(root -> val);
                root = root -> right;
            }
        }
        return nodes;
    }