Code: BST to Sorted LL
Given a BST, convert it into a sorted linked list. Return the head of LL.
Sample Input :
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
Sample Output :
2 5 6 7 8 10


/************************************************************ SOLUTION ******************************************************************/


SOLUTION:
class base {
    public:
    Node<int> *head;
    Node <int> *tail;
}; 
base abc(BinaryTreeNode<int>* root){
    if(root==NULL){
        base b;
        b.head=NULL;
        b.tail=NULL;
        return b;
    }
    base l=abc(root->left);
    base r=abc(root->right);
    Node<int> *n = new Node<int>(root->data);
    if(l.tail!=NULL)
        l.tail -> next = n;
    n -> next = r.head;
    base b;
    if(l.head!=NULL) 
        b.head = l.head;   
    else 
        b.head = n;
    if(r.tail!=NULL) 
        b.tail=r.tail; 
    else 
        b.tail=n;
    return b;
} 
Node<int>* constructBST(BinaryTreeNode<int>* root) {
    base b=abc(root); 
    return b.head;
}/*
#include<bits/stdc++.h>
Node<int>* constructBST(BinaryTreeNode<int>* root) {
     if(root==NULL){
        return NULL;
     }
    Node<int>* a=new Node<int>(root->data);
    Node<int>*le= constructBST(root->left);
    if(le==NULL){
        le=a;
    }
    else{
        Node<int>*temp=le;
        while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = a;
    }
    Node<int>*re= constructBST(root->right);
    if(re==NULL){
        a -> next = NULL;
    }
    else{
    a -> next = re;
    }   
    return le;
    }
    */
