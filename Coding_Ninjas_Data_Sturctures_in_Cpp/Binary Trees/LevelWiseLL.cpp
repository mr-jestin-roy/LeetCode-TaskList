Level wise linkedList
Given a binary tree, write code to create a separate linked list for each level. You need to return the array which contains the head of each level linked list.
Sample Input :
5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output :
5 
6 10 
2 3 
9


/************************************************************ SOLUTION ******************************************************************/


SOLUTION:
#include<queue>
#include<vector>
vector<node<int>*> createLLForEachLevel(BinaryTreeNode<int> *root) {
    
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    //q.push(NULL);
    
    int currlevelRemaining = 1;
    int nxtLevelCount = 0;

    vector<node<int>*> output;
    
    node<int> *currLevelHead = NULL;
    node<int> *currLevelTail = NULL;
    
    while(!q.empty()){
        
        BinaryTreeNode<int> *first = q.front();
        q.pop();
        
        node<int> *newNode = new node<int>(first -> data);
        
        if(currLevelHead == NULL){
            currLevelHead = newNode;
            currLevelTail = newNode;
        }
        
        else{
            currLevelTail -> next = newNode;
            currLevelTail = newNode; 
        }
        
        if(first -> left != NULL){
            q.push(first -> left);
            nxtLevelCount++;
        }
        
        if(first -> right != NULL){
            q.push(first -> right);
            nxtLevelCount++;
        }
        
        currlevelRemaining --;
        
        if(currlevelRemaining == 0){
            output.push_back(currLevelHead);
            currLevelHead = NULL;
            currLevelTail = NULL;
            currlevelRemaining = nxtLevelCount;
            nxtLevelCount = 0;
        }
    }
    return output;
}
