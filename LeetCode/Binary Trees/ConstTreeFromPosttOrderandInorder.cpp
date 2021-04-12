Construct Tree from Postorder and Inorder
Given Postorder and Inorder traversal of a binary tree, create the binary tree associated with the traversals.You just need to construct the tree and return the root.
Note: Assume binary tree contains only unique elements.
Input format :

Line 1 : n (Total number of nodes in binary tree)

Line 2 : Post order traversal

Line 3 : Inorder Traversal

Output Format :

Elements are printed level wise, each level in new line (separated by space).

Sample Input :
8
8 4 5 2 6 7 3 1
4 8 2 5 1 6 3 7
Sample Output :
1 
2 3 
4 5 6 7 
8


/************************************************************ SOLUTION ******************************************************************/


BinaryTreeNode<int>* getTreeFromPostorderAndInorder(int *postOrder, int postLength, int *inOrder, int inLength) {
    
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(postOrder[postLength-1]);
    
    if(postLength == 1)    // base case when only root is present and no left or right node
        return root;
    
    if(postLength == 0)    //if one of both right or left is present check for 2, 1 2, 1 2;;;dry run it
        return NULL;
    
    int i = 0;
    while(inOrder[i] != postOrder[postLength - 1]){
        i++;
    }
    
    int left_size = i;
    int right_size = inLength -i - 1;
    
    BinaryTreeNode<int> *leftSubtree = getTreeFromPostorderAndInorder(postOrder, left_size, inOrder, left_size);
    BinaryTreeNode<int> *rightSubtree = getTreeFromPostorderAndInorder(postOrder + left_size, right_size, inOrder + 1 + left_size, right_size);
    
    root -> left = leftSubtree;
    root -> right = rightSubtree;
    
    return root;
}
