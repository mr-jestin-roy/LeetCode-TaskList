Min and Max of Binary Tree
Given a binary tree, find and return the min and max data value of given binary tree.
                                     Return the output as an object of PairAns class, which is already created.
                                     Input format :
                                     Elements in level order form (separated by space)
                                     (If any node does not have left or right child, take - 1 in its place)
                                     Output Format :
                                     Max and min (separated by space)
                                     Sample Input :
                                     8 3 10 1 6 - 1 14 - 1 - 1 4 7 13 - 1 - 1 - 1 - 1 - 1 - 1 - 1
                                     Sample Output :
                                     14 1


                                     /************************************************************ SOLUTION ******************************************************************/


                                     /* Time complexity: O(N)
                                     Space complexity: O(H)
                                     where N is the number of nodes in the input tree and H is the height of the input tree */
#include <climits>
                                     /* The first value of the pair is the minimum value in the tree and the second value o
                                     f the pair is the maximum value in the tree */
                                     pair<int, int> getMinAndMax(BinaryTreeNode<int> *root)
{

    pair<int, int> ret = make_pair(INT_MAX, INT_MIN);

    if (root == NULL)
    {
        return ret;
    }
    pair<int, int> leftPair = getMinAndMax(root->left);
    pair<int, int> rightPair = getMinAndMax(root->right);

    ret.first = min(min(leftPair.first, rightPair.first), root->data);
    ret.second = max(max(leftPair.second, rightPair.second), root->data);

    return ret;
}

/*
PairAns minMax(BinaryTreeNode<int> *root) {
    PairAns p;
    p.min=INT_MAX;
    p.max=INT_MIN;
    if(root==NULL)
        return p;

    PairAns leftPair=minMax(root->left);
    PairAns rightPair=minMax(root->right);

    p.max=max(max(leftPair.max,rightPair.max),root->data);
    p.min=min(min(leftPair.min,rightPair.min),root->data);

    return p;
}
*/
