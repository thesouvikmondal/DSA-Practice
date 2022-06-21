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
class Solution {
    struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    int ans;
    int largestBst(Node *root) {
    	ans = 0;
    	fun(root);
    	return ans;
    }
    
    vector<int> fun(Node *root) {
        if(not root) return {INT_MIN, INT_MAX, 0};
        
        vector<int> l1 = fun(root->left);
        vector<int> l2 = fun(root->right);
        
        if(l1[2] == -1 or l2[2] == -1) return {-1, -1, -1};
        
        int data = root->data;
        if(data > l1[0] and data < l2[1]) {
            int val = l1[2]+ l2[2] + 1;
            ans = max(ans, val);
            
            int mn1 = max(data, max(l1[0], l2[0]));
            int mx1 = std::min(data, std::min(l1[1], l2[1]));
            
            return {mn1, mx1, val};
        }
        else return {-1, -1, -1};
        return {-1, -1, -1};
    }
};