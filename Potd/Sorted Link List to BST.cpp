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
struct LNode
{
    int data;
    struct LNode* next;
    
    LNode(int x){
        data = x;
        next = NULL;
    }
};

//Tree
struct TNode  
{  
    
    int data;  
    struct TNode* left;  
    struct TNode* right; 
    TNode(int x)
    {
        data=x;
        left=right=NULL;
    }
};
class Solution{
  public:
    TNode* makeBST(vector<int> & nodes, int l , int h){
        
        if(l>h) return NULL;
           
       
        int mid = (h+l)>>1;
         if((h-l+1)%2==0) mid++;
        
        TNode* root = new TNode(nodes[mid]);
        root->left = makeBST(nodes,l,mid-1);
        root->right = makeBST(nodes,mid+1,h);
        
        
    }
    TNode* sortedListToBST(LNode *head) {
         
         if(head==NULL) return NULL;
        vector<int> nodes;
        
        while(head){
            
            nodes.push_back(head->data);
            head = head->next;
        }
         
         int l = 0;
         int h = nodes.size()-1;
         if(h==1) {
             TNode* root = new TNode(nodes[h]);
             root->left = new TNode(nodes[l]);
             return root;
         }
         TNode* root = makeBST(nodes,l,h);
         return root;
         
         
         
    }
};