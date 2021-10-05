ZigZag Tree
Given a binary tree, print the zig zag order i.e print level 1 from left to right, level 2 from right to left and so on. This means odd levels should get printed from left to right and even level right to left.
Sample Input :
5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output :
5
10 6
2 3
9

/************************************************************ SOLUTION ******************************************************************/


SOLUTION:
#include<stack>
void zigZagOrder(BinaryTreeNode<int> *root) {
    stack<BinaryTreeNode<int>*>srl; // R->L
    stack<BinaryTreeNode<int>*>slr; // L->R
    srl.push(root); 
    while (srl.size()!=0 || slr.size()!=0)    //don't use srl.empty()!=0 in place of size funtion
    {
        while(srl.size()!=0){
            BinaryTreeNode<int>* curr = srl.top();
            cout<<curr->data<<" ";
            srl.pop();
            
            if (curr->left != NULL)    //you canwrite in place of curr->left!=NULL
                slr.push(curr->left);
            
            if (curr->right != NULL)
                slr.push(curr->right);
            
            if(srl.size() == 0)
                cout<<endl;
        }
        while(slr.size()!=0) {
            BinaryTreeNode<int>* curr=slr.top();
            cout<<curr->data<<" ";
            slr.pop();
            
if (curr->right != NULL)
                srl.push(curr->right);
            
if (curr->left != NULL)
                srl.push(curr->left);
            
if(slr.size()==0)
                cout<<endl;
        }
     }
}
