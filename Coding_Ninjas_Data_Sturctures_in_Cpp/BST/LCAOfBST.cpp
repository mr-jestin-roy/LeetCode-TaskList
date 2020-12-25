LCA of BST
Given a binary search tree and two nodes, find LCA(Lowest Common Ancestor) of the given two nodes in the BST. Read about LCA if you are having doubts about the definition.
If out of 2 nodes only one node is present, return that node.
If both are not present, return -1.
Input format :
Line 1 :  Elements in level order form (separated by space)
(If any node does not have left or right child, take -1 in its place)
Line 2 : Two integers, Node 1 and Node 2 (separated by space)
Output Format :
LCA
Constraints :
1 <= N <= 1000
Sample Input 1:
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
2 10
Sample Output 1:
8
Sample Input 2:
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
2 6
Sample Output 2:
5
Sample Input 3:
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
12 78
Sample Output 3:
-1

/************************************************************ SOLUTION ******************************************************************/

int lcaInBST(BinaryTreeNode<int>* root , int val1 , int val2){
	if(root == NULL){
        return -1;
    }
    
    if(root -> data == val1 && root -> data == val2){
        return root -> data;
    }
    
    else if(root -> data > val1 && root -> data > val2){
        return lcaInBST(root -> left, val1, val2);
    }
    
    else if(root -> data < val1 && root -> data < val2){
        return lcaInBST(root -> right, val1, val2);
    }
    
    else{
        int left = lcaInBST(root -> left, val1, val2);
        int right = lcaInBST(root -> right, val1, val2);
        
        if(left == NULL && right == NULL){
            return -1;
        }
        else if(left == NULL && right != NULL){
            return right;
        }
        else if(left != NULL && right == NULL){
            return left;
        }
        else{
            return root -> data;
        }
    }
}
