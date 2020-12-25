Contains x
Given a generic tree and an integer x, check if x is present in the given tree or not. Return true if x is present, return false otherwise.
Input format :
Line 1 : Integer x
Line 2 : Elements in level order form separated by space (as per done in class). Order is - 
Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
Output format :
true or false
Sample Input 1 :
40
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1 :
true
Sample Input 2 :
4
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 2:
false


/*********************************************** SOLUTION ***************************************************************************/


bool containsX(TreeNode<int>* root, int x) {
    queue <TreeNode<int>*> q;
    q.push(root);
    
    while(!q.empty()){
        TreeNode<int> *p = q.front();
        q.pop();
        
        if(p -> data == x){
            return true;
        }
        for(int i = 0; i < p -> children.size(); i++){
            q.push(p -> children[i]);
        }
    }
    return false;
}

/*
bool containsX(TreeNode<int>* root, int x) {
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode<int>* p = q.front();
        q.pop();
        if(p->data == x)
            return true;
        for(int i=0;i<p->children.size();i++)
            q.push(p->children[i]);
    }
    return false;
} 
*/
