Nodes without sibling
Given a binary tree, print all nodes that don’t have a sibling.
Sample Input :
5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output :
9


/************************************************************ SOLUTION ******************************************************************/


SOLUTION:
void nodesWithoutSibling(BinaryTreeNode<int> *root) {
    
    if(root == NULL){
        return;
    }
    
    if(root -> left == NULL && root -> right != NULL){
        cout << root -> right -> data << endl;
    }
    else if(root -> left != NULL && root -> right == NULL){
         cout << root -> left -> data << endl;
    }
    
    nodesWithoutSibling(root -> left);
    nodesWithoutSibling(root -> right);
}
