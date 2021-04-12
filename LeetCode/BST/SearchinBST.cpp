Code: Search in BST
Given a BST and an integer k. Find if the integer k is present in given BST or not. Return the node with data k if it is present, return null otherwise.
Assume that BST contains all unique elements.
Sample Input :
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
6 10
Sample Output :
6 7 8 10
	
	
/************************************************************ SOLUTION ******************************************************************/
	

SOLUTION:
BinaryTreeNode<int>* searchInBST(BinaryTreeNode<int> *root , int k){
    if(root == NULL){
        return NULL;
    }
    
    if(root -> data == k){
        return root;
    }
    
    if(root -> data > k){
        return searchInBST(root -> left, k);
    }
    else{
        return searchInBST(root -> right, k);
    }
}
