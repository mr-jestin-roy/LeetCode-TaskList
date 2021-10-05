Postorder Binary Tree
Given a binary tree, print the postorder traversal of given tree.
Post-order traversal is: LeftChild RightChild Root
Input format :
Elements in level order form (separated by space)
(If any node does not have left or right child, take -1 in its place)
Output Format :
Post-order traversal, elements separated by space
Sample Input :
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
Sample Output :
1 4 7 6 3 13 14 10 8


/************************************************************ SOLUTION ******************************************************************/


void postOrder(BinaryTreeNode<int> *root) {
    if (root == NULL) 
        return; 
  
    // first recur on left subtree 
    postOrder(root->left); 
  
    // then recur on right subtree 
    postOrder(root->right); 
  
    // now deal with the node 
    cout << root->data << " ";    
}
