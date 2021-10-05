Min and Max of Binary Tree
Given a binary tree, find and return the min and max data value of given binary tree.
Return the output as an object of PairAns class, which is already created.
Input format :
Elements in level order form (separated by space)
(If any node does not have left or right child, take -1 in its place)
Output Format :
Max and min (separated by space)
Sample Input :
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
Sample Output :
14 1


/************************************************************ SOLUTION ******************************************************************/


#include<climits>
#include<queue>
PairAns minMax(BinaryTreeNode<int> *root) {
    PairAns p;
    
    p.max = INT_MIN;
    p.min = INT_MAX;
    
    if(root == NULL)
        return p;
    
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    
    while(!q.empty()){
        
        BinaryTreeNode<int> *front = q.front();
        q.pop();
        
        if(front -> data > p.max){
            p.max = front -> data;
        }
        
        if(front -> data < p.min){
            p.min = front -> data;
        }
        
        if(front -> right){
            q.push(front -> right);
        }
        
        if(front -> left){
            q.push(front -> left);
        }
    }
    
    return p;
}

/*
PairAns minMax(BinaryTreeNode<int> *root) {
    PairAns p;
    p.min=INT_MAX;
    p.max=INT_MIN;
    if(root==NULL) 
        return p;
    
    PairAns leftPair=minMax(root->left);
    PairAns rightPair=minMax(root->right);
    
    p.max=max(max(leftPair.max,rightPair.max),root->data); 
    p.min=min(min(leftPair.min,rightPair.min),root->data);
    
    return p;
}
*/
