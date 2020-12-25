Code: Print Elements in Range
Given a Binary Search Tree and two integers k1 and k2, find and print the elements which are in range k1 and k2 (both inclusive).
Print the elements in increasing order.
Sample Input :
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
6 10
Sample Output :
6 7 8 10


/************************************************************ SOLUTION ******************************************************************/


SOLUTION:
void elementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2) {
     if(root==NULL)
      return ;
    
    if(root ->data > k1)
        elementsInRangeK1K2(root -> left, k1, k2);
    
    if(k1 <= root -> data && k2 >= root->data)
        cout<<root->data<<" ";
    
    if(root -> data <= k2)
        elementsInRangeK1K2(root->right,k1,k2);
}
