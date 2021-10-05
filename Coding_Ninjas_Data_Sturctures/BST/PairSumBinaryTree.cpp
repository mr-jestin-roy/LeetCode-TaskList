Pair sum BInary Tree
Given a binary tree and an integer S, print all the pair of nodes whose sum equals S.
Assume binary tree contains all unique elements.
Note : In a pair, print the smaller element first. Order of different pair doesn't matter.
Input format :
Line 1 : Elements in level order form (separated by space)
(If any node does not have left or right child, take -1 in its place)
Line 2 : Integer S
Output Format :
Each pair in different line (pair elements separated by space)
Constraints :
1 <= N <= 1000
Sample Input 1:
5 10 6 2 3 -1 -1 -1 -1 -1 9 -1 -1
15
Sample Output 1:
5 10
6 9


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

void nodesSumToS(BinaryTreeNode<int> *root, int sum) {
	vector<int> output;
    
    helper(root, output);
    
    sort(output.begin(), output.end());
    
    int i = 0; int j = output.size() - 1;
    
    while(i <= j){
        if(output[i] + output[j] > sum){
            j--;
        }
        else if(output[i] + output[j] < sum){
            i++;
        }
        else{
            cout << output[i] << " " << output[j] << endl;
            i++;
            j--;
        }
    }
}
