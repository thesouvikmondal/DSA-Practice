#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <iterator>
using std::vector;
using std::string;
using std::max;
#include <bits/stdc++.h>
using namespace std;


   typedef struct Node
{
    int data;
    struct Node *left, *right;
} Node;


Node* newNode( int data )
{
    Node* temp = (Node *)malloc( sizeof( Node ) );
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}



class Solution{
public:
    //Function that constructs BST from its preorder traversal.
   Node* post_order(int pre[], int size)
    {
        int idx = 0;
        Node *root = buildTree(pre , idx , size  );
        return root;
    }
    
    Node *buildTree( int pre[] , int &idx  , int size ,int Min = -1e8 ,  int Max = 1e8 ){
        
        if(idx >= size )return NULL;
        
        if(pre[idx] < Min || pre[idx] > Max) return NULL;
        
        Node *root = newNode(pre[idx]);
        idx++;
        
        root->left = buildTree(pre , idx , size , Min , root->data - 1);
        
        root->right = buildTree(pre , idx , size , root->data + 1 , Max );
        
        return root;
    }
};