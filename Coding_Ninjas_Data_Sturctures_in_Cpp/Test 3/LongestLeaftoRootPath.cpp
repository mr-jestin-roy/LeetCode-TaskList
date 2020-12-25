Longest Leaf to root path
Send Feedback
Given a binary tree, return the longest path from leaf to root. Longest means, a path which contain maximum number of nodes from leaf to root.
Input format :

Elements in level order form (separated by space)

(If any node does not have left or right child, take -1 in its place)

Line 1 : Binary Tree 1 (separated by space)

Sample Input 1 :
 5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output 1 :
9
3
6
5


/******************************************************* SOLUTION ************************************************************************/


vector<int>* longestPath(BinaryTreeNode<int>* root) {
	// Write your code here
    if(root==NULL)
        return NULL;
    if(!root->left&&!root->right)
    {
        vector<int>* output=new vector<int>();
        output->push_back(root->data);
        return output;
        
    }
     vector<int>*leftans=longestPath(root->left);
         vector<int>*rightans=longestPath(root->right);
if(!leftans)
{
    rightans->push_back(root->data);
    return rightans;
    
}else if(!rightans)
    
{
    leftans->push_back(root->data);
    return leftans;
}
    
else{
    if(leftans->size()<rightans->size())
    {
        rightans->push_back(root->data);
        delete leftans;
        
        return rightans;
        
    }
    else{
       leftans->push_back(root->data);
        delete rightans;
        
        return leftans;
    }
}
}
