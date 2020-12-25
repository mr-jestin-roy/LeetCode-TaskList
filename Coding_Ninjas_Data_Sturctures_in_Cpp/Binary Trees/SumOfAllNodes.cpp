Sum of all nodes
Given a binary tree, find and return the sum of all nodes.
Input format :

Elements in level order form (separated by space). If any node does not have left or right child, take -1 in its place.

Sample Input :
5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output :
35

/************************************************************ SOLUTION ******************************************************************/


int sumOfAllNodes(BinaryTreeNode<int>* root) {
    // Write your code here
     if(root==NULL)
        return 0;
    if(root->left==NULL && root->right==NULL)
        return root->data;
    return sumOfAllNodes(root->left)+sumOfAllNodes(root->right)+root->data;
}
