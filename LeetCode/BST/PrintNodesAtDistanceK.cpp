Print nodes at distance k from node
Given a binary tree, a node and an integer K, print nodes which are at K distance from the the given node.
Input format :

Line 1 : Elements in level order form (separated by space)

(If any node does not have left or right child, take -1 in its place)

Line 2 : Node

Line 3 : K

Output format : Answer nodes in different line

Sample Input :
5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
3
1
Sample Output :
9
6


/************************************************************ SOLUTION ******************************************************************/


void depth(BinaryTreeNode<int> *root, int k) { 
    if(root == NULL) {
        return;
    }
    if(k == 0) { 
        cout << root -> data << endl; 
        return;
    }
    depth(root -> left, k - 1);
    depth(root -> right, k - 1);
}
int nodesAtDistanceKHelper(BinaryTreeNode<int> *root, int target, int k) {
    if (root == NULL) 
        return -1;
    
    if (root -> data == target) {
        depth(root, k);
        return 0;
    }
    
    int leftD = nodesAtDistanceKHelper(root -> left, target, k);
    
    if (leftD != -1) { 
        if (leftD + 1 == k) {
            cout << root -> data << endl;
        }
        else
            depth(root -> right, k - leftD - 2);
        return 1 + leftD;
    }
    int rightD = nodesAtDistanceKHelper(root -> right, target, k);
    if (rightD != -1) {
        if (rightD + 1 == k) {
            cout << root -> data << endl;
        } 
        else
            depth(root -> left, k - rightD - 2);
        return 1 + rightD;
    }
    return -1;
}
void nodesAtDistanceK(BinaryTreeNode<int> *root, int node, int k) {
    
    nodesAtDistanceKHelper(root, node, k);

}


/*

void print_depth(BinaryTreeNode<int> *root,int k)
{
    if(root == NULL)
        return;
    else if(k == 0)
        cout << root -> data << endl;
    
    print_depth(root -> left, k - 1);
    print_depth(root -> right, k - 1);
    
    
}
int helper(BinaryTreeNode<int> *root, int node, int k)
{
    if(root == NULL)            
        return -1;
    if(root -> data == node)      
    {
        print_depth(root,k);
        return 0;
    }
    int ld = helper(root -> left,node,k);       
    if(ld != -1)                             
    {
        if(ld + 1 == k)                    
          cout << root -> data << endl;         
        else                                     
            print_depth(root -> right, k - ld - 2);
    }
    int rd = helper(root -> right, node, k);        
    if(rd != -1)
    {
        if(rd + 1 == k)
          cout << root -> data << endl;
        else
            print_depth(root -> left,k - rd - 2);
    }
    if(rd == -1 && ld == -1)    
        return -1;
    else
        return ld + rd + 2;
    
}
void nodesAtDistanceK(BinaryTreeNode<int> *root, int node, int k) {
    int x = helper(root, node, k);
    if(x == NULL)
        return;
}
*/
