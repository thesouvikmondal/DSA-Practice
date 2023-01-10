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
  struct Node
{
    int data;
    Node* left, * right;
};
private:
    inline int backtrack(Node* node) {
        if (!node) {
            return 0;
        }
        int ret_val = node -> data;
        node -> data = backtrack(node->left) + backtrack(node->right);
        return ret_val + node->data;
    }
  public:
    void toSumTree(Node *node)
    {
        backtrack(node);
    }
};