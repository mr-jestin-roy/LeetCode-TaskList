is Balanced
Given a binary tree, check if its balanced i.e. depth of left and right subtrees of every node differ by at max 1. Return true if the given binary tree is balanced, false otherwise.
Sample Input 1 :
5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output 1 :
false


/************************************************************ SOLUTION ******************************************************************/


SOLUTION:
int height(BinaryTreeNode<int> *root){
    if(root == NULL)
        return 0;
    return 1 + max(height(root -> left), height(root -> right));
}

bool isBalanced(BinaryTreeNode<int> *root) {
    if(root == NULL)
        return true;
    int lh = height(root -> left);
    int rh = height(root -> right);
    
    if(lh - rh > 1 && rh - lh > 1)
        return false;
    if( abs(lh - rh) <= 1 && isBalanced(root -> left) && isBalanced(root -> right))
        return true;
    return false;
}//END
