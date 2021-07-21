//with recusrion 
void leftviewHelper(Node* root,int level,int &height){
    if(root == NULL) return;
    if(height < level){
        cout<<root->val<<" ";
        height = level;
    }
    leftviewHelper(root->left,level+1,height);
    leftviewHelper(root->right,level+1,height);
}
void leftview(Node* root){
    int height =0
    leftviewHelper(root,1,height);
}