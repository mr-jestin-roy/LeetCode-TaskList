Next larger
Given a generic tree and an integer n. Find and return the node with next larger element in the Tree i.e. find a node with value just greater than n.
Return NULL if no node is present with the value greater than n.
Input Format :
Line 1 : Integer n
Line 2 : Elements in level order form separated by space (as per done in class). Order is - 
Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
Output Format :
Node with value just greater than n.
Sample Input 1 :
18
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1 :
20
Sample Input 2 :
21
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 2:
30


/*********************************************** SOLUTION ***************************************************************************/


#include<queue>
#include<climits>
TreeNode<int>* nextLargerElement(TreeNode<int> *root, int n) {
    
    queue<TreeNode<int>*> q;
    q.push(root);
    
    TreeNode<int> *res = root;
    int diff = INT_MAX;
    
    while(!q.empty()){
        
        TreeNode<int> *fr = q.front();
        q.pop();
        
        if(fr -> data - n < diff && fr -> data > n){
            res = fr;
            diff = fr -> data -n;
        }
        
        for(int i = 0; i < fr -> children.size(); i++){
            q.push(fr -> children[i]);
        }
    }
    if(res == root)
        return NULL;
    return res;
}
