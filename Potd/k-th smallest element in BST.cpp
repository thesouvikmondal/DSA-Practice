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
class Solution {
public:

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


// Return the Kth smallest element in the given BST
    int count = 0;
    int ans;
    void inorder(Node *root, int K){
        
        
        if(root == NULL){
            return ;
        }
        
        inorder(root->left,K);
        
        if(count == K-1){
            ans = root->data;
        }
        count++;
        
        inorder(root->right,K);
    }
    
    int KthSmallestElement(Node *root, int K) {
        // add code here.
        inorder(root,K);
        
        if(count < K){
            return -1;
        }
        
        return ans;
    }
};