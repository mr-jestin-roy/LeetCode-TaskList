Path Sum Root to Leaf
Given a binary tree and a number k, print out all root to leaf paths where the sum of all nodes value is same as the given number k.
Input format :

Line 1 : Elements in level order form (separated by space)

(If any node does not have left or right child, take -1 in its place)

Line 2 : k

Output format : Print each path in new line, elements separated by space

Sample Input 1 :
5 6 7 2 3 -1 1 -1 -1 -1 9 -1 -1 -1 -1
13
Sample Output 1 :
5 6 2
5 7 1


/************************************************************ SOLUTION ******************************************************************/


#include<vector>

void helper(BinaryTreeNode<int> *root, int k, vector<int> v){
    
    if(root == NULL){
        return;
    }
    
    if(root -> left == NULL && root -> right == NULL){
        if(k - root -> data == 0){
            int i = 0;
            while(i < v.size()){
                cout << v[i] << " ";
                i++;
            }
            
            cout << root -> data << endl;
        }
        return;
    }
    
    v.push_back(root -> data);
    helper(root -> left, k - root -> data, v);
    helper(root -> right, k - root -> data, v);
}

void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k) {
	
    vector<int> v;
    
    helper(root, k, v);
}
