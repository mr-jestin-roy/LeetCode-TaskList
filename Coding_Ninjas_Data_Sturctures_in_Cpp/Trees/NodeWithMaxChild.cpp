Node with maximum child sum
Given a tree, find and return the node for which sum of data of all children and the node itself is maximum. In the sum, data of node itself and data of immediate children is to be taken.
Input format :
Line 1 : Elements in level order form separated by space (as per done in class). Order is - 
Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
Output format :
Node with maximum sum.
Sample Input 1 :
5 3 1 2 3 1 15 2 4 5 1 6 0 0 0 0
Sample Output 1 :
1


/*********************************************** SOLUTION ***************************************************************************/


#include<queue>
#include<stack>
TreeNode<int>* maxSumNode(TreeNode<int> *root){
    
    queue <TreeNode<int>*> q;
    stack <TreeNode<int>*> s;
    
    int large = 0;
    q.push(root);
    
    while(!q.empty()){
        int maxSum = q.front() -> data;
        
        for(int i = 0; i < root -> children.size(); i++){
            //TreeNode<int> *x = root -> children[i];    //try to push directly using children[i]
            q.push(root -> children[i]);
            maxSum += root -> children[i] -> data;
        }
        
        if(maxSum > large){
            /*while(!s.empty()){
                s.pop();
            }*/
            
            s.push(q.front());
            large = maxSum;
        }
        
        q.pop();
        root = q.front();
    }
    
    /*TreeNode<int> *y = s.top();
    s.pop();*/
    return s.top();
}

/*
#include<stack>
#include<queue>
TreeNode<int>* maxSumNode(TreeNode <int> *root){
    queue<TreeNode<int>*> q1;
    stack<TreeNode<int>*> q2;
    int large = 0;
    q1.push(root);
    while(!q1.empty()){
        int maxSum = q1.front()->data;
        for(int i=0;i<root->children.size();i++){
            TreeNode<int>* x = root->children[i];
            q1.push(x);
            maxSum += x->data;
        }
        if(maxSum > large){
            while(!q2.empty()){
                q2.pop();
            }
            q2.push(q1.front());
            large = maxSum;
        }
        q1.pop();
        root = q1.front();
    }
    TreeNode<int>* y = q2.top();
    q2.pop();
    return y;
}



/*
#include <climits>
template <typename T>
class MaxNodePair {
    public : TreeNode<T> *node;
    int sum;
}; 
MaxNodePair<int>* maxSumNodeHelper(TreeNode<int> *root){ 
    if(root == NULL){
        MaxNodePair<int> *pair = new MaxNodePair<int>(); 
        pair -> node = NULL;
        pair -> sum = INT_MIN;
        return pair;
    }
    int sum =root -> data;
    for(int i = 0; i < root -> children.size(); i++){ 
        sum += root -> children[i] -> data;
    }
    MaxNodePair<int> *ans = new MaxNodePair<int>();
    ans -> node = root;
    ans -> sum = sum;
    for(int i = 0; i < root -> children.size(); i++){ 
        MaxNodePair<int> *childAns = maxSumNodeHelper(root -> children[i]);
        if(childAns -> sum > ans -> sum){
            ans = childAns;
        }
    }
    return ans;
}
TreeNode<int>* maxSumNode(TreeNode<int> *root){ 
    return maxSumNodeHelper(root) -> node;
}
*/
