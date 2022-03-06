#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
using std::vector;
using std::string;
using std::max;
class Solution {
  public:
   void dfs(Node* root, long long &ans, long long curr){
        if(!root){
            ans = max(curr, ans);
            return;
        }
        curr *= root->data;
        dfs(root->left, ans, curr);
        dfs(root->right, ans, curr);
    }
    long long findMaxScore(Node* root)
    {
        // Your code goes here
        long long ans = 0, curr = 1;
        dfs(root, ans, curr);
        return ans;
        // Your code goes here
    }
};