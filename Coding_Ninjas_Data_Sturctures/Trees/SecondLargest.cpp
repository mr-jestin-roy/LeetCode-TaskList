Second Largest Element In Tree
Given a generic tree, find and return the node with second largest value in given tree. Return NULL if no node with required value is present.
Input format :
Line 1 : Elements in level order form separated by space (as per done in class). Order is -
Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
Output Format :
Second Largest node data
Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1 :
40


/*********************************************** SOLUTION ***************************************************************************/


#include<stack>
#include<queue>
TreeNode <int>* secondLargest(TreeNode<int> *root) {
    
    queue<TreeNode<int>*> q;
    stack<TreeNode<int>*> s;
    
    q.push(root);
    TreeNode<int> *nxt = new TreeNode<int>(0);
    int low = 0;
    
    while(!q.empty()){
        
        TreeNode<int> *fr = q.front();
        q.pop();
        
        if(fr -> data > nxt -> data){
            s.push(fr);
            nxt = fr;
        }
        
        for(int i = 0; i < fr -> children.size(); i++){
            q.push(fr -> children[i]);
        }
    }
    if(s.empty()|| s.size() == 1){
        return NULL;
    }
    
    s.pop();
    return s.top();
}

/*
TreeNode <int>* secondLargest(TreeNode<int> *root) {
    
    queue<TreeNode<int>*> q;
    
    TreeNode<int>* large = new TreeNode<int>(0);
    TreeNode<int>* secondLarge;
    
    if(root->children.size() < 1)
        return 0;
    
    q.push(root);
    
    while(!q.empty()){
        if(q.front() -> data > large->data){
            secondLarge = large;
            large = q.front();
        }
        else if(q.front()->data > secondLarge -> data){
            if(q.front() -> data != large->data)
                secondLarge = q.front();
            else
                return NULL;
        }
        
        for(int i=0;i<root->children.size();i++)
            q.push(root->children[i]);
        
        q.pop();
        root=q.front();
    }
    return secondLarge;
}

*/
