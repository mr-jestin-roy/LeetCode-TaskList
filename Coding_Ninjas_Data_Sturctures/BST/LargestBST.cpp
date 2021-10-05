Largest BST
Given a Binary tree, find the largest BST subtree. That is, you need to find the BST with maximum height in the given binary tree.
Return the height of largest BST.
Input format :

Line 1 : Elements in level order form (separated by space)

(If any node does not have left or right child, take -1 in its place)

Sample Input 1:
5 10 6 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output 1:
2


/************************************************************ SOLUTION ******************************************************************/


#include<climits>
#include<cmath>

int height(BinaryTreeNode<int> *root){
    if(root == NULL){
        return 0;
    }
    int ans1 = 0; int ans2 = 0;
    
    ans1 = height(root -> left);
    ans2 = height(root -> right);
    
    if(ans1 > ans2){
        return ans1 + 1;
    }
    else{
        return ans2 + 1;
    }
    
}

bool isBST(BinaryTreeNode<int> *root, int min = INT_MIN, int max = INT_MAX){
    if(root == NULL){
        return true;
    }
    if(root -> data < min || root -> data > max){
        return false;
    }
    
    bool isLeftOK = isBST(root -> left, min, root -> data -1);
    bool isRightOK = isBST(root -> right, root -> data + 1, max);
    
    return isLeftOK && isRightOK;
}
int largestBSTSubtree(BinaryTreeNode<int> *root) {
	
    if(isBST(root)){
        return height(root);
    }
    else{
        int ans1 = largestBSTSubtree(root -> left);
        int ans2 = largestBSTSubtree(root -> right);
        
        return max(ans1, ans2);
    }
}

/* 
class BSTSubTree{
    public:
    	int min;
    	int max;
    	int height;
    	bool isBST;
};

BSTSubTree largestBSTSubtreehelper(BinaryTreeNode<int> *root){
    
    if(root == NULL){
        BSTSubTree ans;
        ans.min = INT_MAX;
        ans.max = INT_MIN;
        ans.height = 0;
        ans.isBST = true;
        return ans;
    }
    
    BSTSubTree left = largestBSTSubtreehelper(root -> left);
    BSTSubTree right = largestBSTSubtreehelper(root -> right);
    
    if(!(right.isBST && right.min > root -> data)){
        right.isBST = false;
    }
    
    if(!(left.isBST && left.max < root -> data)){
        left.isBST = false;
    }
    BSTSubTree ans;
    if(!left.isBST || !right.isBST || root -> data < left.max || root -> data > right.min) {
        if(left.height > right.height){
            left.isBST = false;
        return left;
        }
    	else{
        	right.isBST = false;
        	return right;
    	}
    }
    
    ans.isBST = true;
    ans.min = min(left.min , min(right.min, root -> data));
    ans.max = max(left.max, max(right.max, root -> data));
    ans.height = max(left.height , right.height) + 1;
    return ans;
}

int largestBSTSubtree(BinaryTreeNode<int> *root) {
	return largestBSTSubtreehelper(root).height;
}

*/
/*
#include<bits/stdc++.h>
int height(BinaryTreeNode<int>* root){
    
    if(root == NULL)
        return 0;
    
    int ans1 = 0, ans2 = 0;
    
    ans1 = height(root->left);
    ans2 = height(root->right);
    
    if(ans1 > ans2)
        return ans1 + 1;
    
    else
        return ans2 + 1;
}

bool isBST(BinaryTreeNode<int>* root, int min = INT_MIN, int max = INT_MAX){
    
    if(root == NULL)
        return true;
    
    if(root -> data < min || root -> data > max)
        return false;
    
    bool isLeftOK = isBST(root->left, min, root->data -1);
    bool isRightOK = isBST(root->right, root->data + 1, max);
    
    return isRightOK && isLeftOK;
}

int largestBSTSubtree(BinaryTreeNode<int> *root) {
    
    if(isBST(root))
        return height(root);
    
    else{
        int ans1 = largestBSTSubtree(root->left);
        int ans2 = largestBSTSubtree(root->right);
        return max(ans1, ans2);
    }
}
*/
