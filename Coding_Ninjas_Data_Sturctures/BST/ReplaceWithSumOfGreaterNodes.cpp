Replace with Sum of greater nodes
Given a binary search tree, replace each nodes' data with the sum of all nodes' which are greater or equal than it. You need to include the current node's data also.
That is, if in given BST there is a node with data 5, you need to replace it with sum of its data (i.e. 5) and all nodes whose data is greater than or equal to 5.
You don't need to return or print, just change the data of each node.
Input format :

Line 1 : Elements in level order form (separated by space)

(If any node does not have left or right child, take -1 in its place)

Output format : Elements are printed in level order wise, every level in new line

Sample Input 1 :
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
Sample Output 1 :
18 
36 10 
38 31 
25 


/************************************************************ SOLUTION ******************************************************************/


int replaceWithLargerNodesSum(BinaryTreeNode<int> *root, int sum){
    
    if(root == NULL){
        return sum;
    }
    
    sum = replaceWithLargerNodesSum(root -> right, sum);
    
    sum += root -> data;
    root -> data = sum;
    
    sum = replaceWithLargerNodesSum(root -> left, sum);
    
    return sum;
}

void replaceWithLargerNodesSum(BinaryTreeNode<int> *root) {
	
    int sum = 0;
    replaceWithLargerNodesSum(root, sum);
    
}

/*
int replaceWithLargerNodesSum(BinaryTreeNode<int> *root, int sum) {
    if (root == NULL)
        return sum;
    
    sum = replaceWithLargerNodesSum(root -> right, sum); 
    
    sum += root -> data;
    root -> data = sum; //REPLACE
    
    sum = replaceWithLargerNodesSum(root -> left, sum); 
    
    return sum;
}
void replaceWithLargerNodesSum(BinaryTreeNode<int> *root) {
    int sum = 0;
    replaceWithLargerNodesSum(root, sum);
}
*/
/*

int helper(BinaryTreeNode<int>* root,int sum)
{
    if(root -> right == NULL && root -> left == NULL)	//if no leaf node then return root data............
    {
        root -> data = root -> data + sum;
        return root -> data;
    }
        
    if(root -> right != NULL)	//root data add with sum of right subtree
    {
        root -> data = root -> data + helper(root -> right, sum);
    }                             
         
    if(root -> left == NULL)	// return root data becaz not return above code  //10 5 15 3 7 13 18 -1 -1 -1 8 -1 14 -1 20 -1 -1 -1 -1 -1 -1 
        return root -> data;
    
    if(root -> left != NULL)
    {
        return helper(root -> left, root -> data);
    }       
}

void replaceWithLargerNodesSum(BinaryTreeNode<int> *root) {
    
    if(root==NULL)
        return;
	
    int sum=0;
    
    helper(root, sum);      //not compulsarry to recieve value.
    
    
}
*/
