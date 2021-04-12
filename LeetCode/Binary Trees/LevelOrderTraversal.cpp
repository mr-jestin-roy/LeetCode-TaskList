Level Order Traversal
Given a binary tree, print the level order traversal. Make sure each level start in new line.
Sample Input :
5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output :
5 
6 10 
2 3 
9


/************************************************************ SOLUTION ******************************************************************/


SOLUTION:
void printLevelATNewLine(BinaryTreeNode<int> *root) {
    
    if(root == NULL)
        return;
    queue <BinaryTreeNode<int>*> q;
    q.push(root);
    q.push(NULL);    //to donate level completion
    
    while(!q.empty()){
        
        BinaryTreeNode<int> *front = q.front();
        q.pop();
        
        if(front == NULL){
            
            if(q.empty())
                return;
            
            else{
                cout << endl;
                q.push(NULL);
            }
        }
        
        else{
            // just print the value of front -> data
            
            cout << front -> data << " ";
            
            if(front -> left != NULL)
                q.push(front -> left);
            if(front -> right != NULL)
                q.push(front -> right);
                
        }
    }
}
