#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <iterator>
#include <set>
using std::vector;
using std::max;
using namespace std;


    

    class Solution{

public: 
    struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
    //Function to convert binary tree to doubly linked list and return it.
    Node* head=NULL;
    Node* tail=NULL;
    void inorder(Node *root){
        if(root==NULL)return;
        inorder(root->left);
        
        Node* new_node=newNode(root->data);
        if(head==NULL){
            head=new_node;
            tail=new_node;
        }
        else{
            tail->right=new_node;
            Node* temp=tail;
            tail=tail->right;
            tail->left=temp;
        }
        
        inorder(root->right);
    }
    Node * bToDLL(Node *root)
    {
      inorder(root);
      return head;
    }
};