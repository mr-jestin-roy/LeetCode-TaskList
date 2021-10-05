Check if a Binary Tree is BST
Given a binary tree with N number of nodes, check if that input tree is BST (Binary Search Tree) or not. If yes, return true, return false otherwise. Duplicate elements should be in the right subtree.
Sample Input 1 :
3 1 5 -1 2 -1 -1 -1 -1
Sample Output 1 :
true
Sample Input 2 :
5 2 10 0 1 -1 15 -1 -1 -1 -1 -1 -1
Sample Output 2 :
false


/************************************************************ SOLUTION ******************************************************************/


SOLUTION:
#include<bits/stdc++.h>
bool helper(BinaryTreeNode<int> *root, int min, int max){
    
    if(root == NULL){
        return true;
    }
    
    if(root -> data < min || root -> data > max){
        return false;
    }
    
    bool left = helper(root -> left, min, root -> data - 1);
    bool right = helper(root -> right, root -> data, max);
    
    return left && right;
}

bool isBST(BinaryTreeNode<int> *root){
    
    int min = INT_MIN;
    int max = INT_MAX;
    
    return helper(root, min, max);
}
