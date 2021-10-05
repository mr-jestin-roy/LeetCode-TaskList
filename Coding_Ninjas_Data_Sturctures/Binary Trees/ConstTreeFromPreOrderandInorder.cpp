Code: Construct Tree from Preorder and Inorder
Given Preorder and Inorder traversal of a binary tree, create the binary tree associated with the traversals.You just need to construct the tree and return the root.
Note: Assume binary tree contains only unique elements.
Input format :

Line 1 : n (Total number of nodes in binary tree)

Line 2 : Pre order traversal

Line 3 : Inorder Traversal

Output Format :

Elements are printed level wise, each level in new line (separated by space).

Sample Input :
12
1 2 3 4 15 5 6 7 8 10 9 12
4 15 3 2 5 1 6 10 8 7 9 12
Sample Output :
1 
2 6 
3 5 7 
4 8 9 
15 10 12


/************************************************************ SOLUTION ******************************************************************/


BinaryTreeNode<int>* buildTree(int *preOrder, int preLength, int *inOrder, int inLength) {
    
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(preOrder[0]);
    
    if(preLength == 1)     // base case when only root is present and no left or right node
        return root;
    if(preLength == 0)    //if one of both right or left is present check for 2, 1 2, 1 2;;;dry run it
        return NULL;
    
    int i = 0;
    
    while(inOrder[i] != preOrder[0]){
        i++;
    }
    
    int left_size = i;
    int right_size = inLength - i - 1;
    
    BinaryTreeNode<int> *leftSubtree = buildTree(preOrder + 1, left_size, inOrder, left_size);
    BinaryTreeNode<int> *rightSubtree = buildTree(preOrder + 1 + left_size, right_size, inOrder + 1 + left_size, right_size);
    
    root -> left = leftSubtree;
    root-> right = rightSubtree;
    
    return root;
}
