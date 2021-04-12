Find Path in BST
Given a BST and an integer k. Find and return the path from the node with data k and root (if a node with data k is present in given BST). Return null otherwise.Assume that BST contains all unique elements.
Sample Input :
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
2
Sample Output :
2
5
8


/************************************************************ SOLUTION ******************************************************************/


SOLUTION:
#include<vector>
vector<int>* findPath(BinaryTreeNode<int> *root , int data){
    if(root == NULL){
        return NULL;
    }
    
    if(root -> data == data){
        vector<int> *output = new vector<int>();
        output -> push_back(root -> data);
        return output;
    }
    
    vector<int> *leftOutput = findPath(root -> left, data);
    if(leftOutput != NULL){
        leftOutput -> push_back(root -> data);
        return leftOutput;
    }
    
    vector<int> *rightOutput = findPath(root -> right, data);
    if(rightOutput != NULL){
        rightOutput -> push_back(root -> data);
        return rightOutput;
    }
    else{
        return NULL;
    }
}
