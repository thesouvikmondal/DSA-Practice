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
struct node
{
    int data;
    struct node* left;
    struct node* right;
    
    node(int x){
        data = x;
        left = right = NULL;
    }
};

bool solve(node *root1,node *root2){
   
   if(root1==NULL&&root2==NULL)return true;
   
   if(root1!=NULL&&root2==NULL)return false;
   if(root1==NULL&&root2!=NULL)return false;
   
   
    
    return (solve(root1->left,root2->right)&&solve(root1->right,root2->left));
   
}
bool IsFoldable(node* root)
{
   // Your code goes here
   if(root==NULL)return true;
   
   return solve(root->left,root->right);
}