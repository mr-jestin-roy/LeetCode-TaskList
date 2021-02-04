bool searchInBST(BinaryTreeNode<int> *root , int k) {
	/* Given a BST and an integer k. Find if the integer k is present in given
	 * BST or not. Return the node with data k if it is present, return null
	 * otherwise. Assume that BST contains all unique elements. */
	if (root == NULL) return NULL;
	if (root->data == k) return root;
	BinaryTreeNode<int>* left = searchInBST(root->left, k);
	if (left != NULL) return left;
	BinaryTreeNode<int>* right = searchInBST(root->right, k);
	if (right != NULL) return right;

}