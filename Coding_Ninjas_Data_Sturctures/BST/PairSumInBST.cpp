Pair sum in a BST
Given a binary search tree and an integer S, find pair of nodes in the BST which sum to S. You can use extra space only O(log n).
Assume BST contains all unique elements.
Note: In a pair, print the smaller element first.
Input format:

Line 1: Elements in the level order form (separated by space)

(If any node does not have left or right child, take -1 in its place)

Line 2: S

Output format: Each pair in a different line (pair elements separated by space)

Sample Input :
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
12
Sample Output
2 10
5 7


/************************************************************ SOLUTION ******************************************************************/


#include<bits/stdc++.h>
void helper(BinaryTreeNode<int> *root, vector<int> &arr){
	if(root == NULL){
        return;
    }
    
    arr.push_back(root -> data);
    
    helper(root -> left, arr);
    helper(root -> right, arr);
}

void printNodesSumToS(BinaryTreeNode<int> *root, int s) {
    
    vector<int> output;
    
    helper(root, output);
    
    sort(output.begin(), output.end());
    
    int i = 0; int j = output.size() - 1;
    while(i < j){
        
        if(output[i] + output[j] > s){
            j--;
        }
        else if(output[i] + output[j] < s){
            i++;
        }
        else{
            cout << output[i] << " " << output[j] << endl;
            i++;
            j--;
        }
    }

}



/*
#include<bits/stdc++.h>
void helper(BinaryTreeNode<int>* root, vector<int>& arr){
    if(root == NULL)
        return;
    
    arr.push_back(root->data);
    
    helper(root->left, arr);
    helper(root->right, arr);
}
void printNodesSumToS(BinaryTreeNode<int> *root, int sum) {
   
    vector<int> output;
    
    helper(root, output);   //convert BTN to vector
    
    sort(output.begin(), output.end());
    
    int i = 0;
    int j = output.size() - 1;
    
    while(i<j){
        if(output[i] + output[j] > sum)
            j--;
        else if(output[i] + output[j] < sum)
            i++;
        else{
            cout<<output[i]<<" "<<output[j]<<endl;
            i++;
            j--;
        }
    }
}
*/
