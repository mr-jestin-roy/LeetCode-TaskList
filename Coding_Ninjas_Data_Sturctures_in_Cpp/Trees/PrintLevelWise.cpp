Print Level Wise
Given a generic tree, print the input tree in level wise order. ####For printing a node with data N, you need to follow the exact format -
N:x1,x2,x3,...,xn
wherer, N is data of any node present in the binary tree. x1, x2, x3, ...., xn are the children of node N
There is no space in between.
You need to print all nodes in the level order form in different lines.
Input format :
Elements in level order form separated by space (as per done in class). Order is - 
Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
Output Format :
Level wise print
Sample Input :
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output :
10:20,30,40
20:40,50
30:
40:
40:
50:


/*********************************************** SOLUTION ***************************************************************************/


#include<queue>
void printLevelWise(TreeNode<int>* root) {
    if (root == NULL) {
		return;
	}
	queue <TreeNode<int>*> pendingQ;
	pendingQ.push(root);
	while(pendingQ.size() != 0){
		TreeNode<int> *front = pendingQ.front();
		cout << front -> data <<":";
		pendingQ.pop();
		for (int i = 0; i < root->children.size(); i++) {
			pendingQ.push(root -> children[i]);
			
			if(root -> children.size() - 1 != i){
				cout << root -> children[i] -> data << ",";
			}
			else{
				cout << root -> children [i] -> data;
			}	
		}
		root = pendingQ.front();
		cout << endl;
	}
}
