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

struct Node {
int data;
Node * right, * left;
};

class Solution{
    public:
    /*The function should return the root of the modified tree*/
    Node* deleteNode(Node* root, int k)
    {
        if(!root) return root;
        if(root->data >= k){
            root = deleteNode(root->left, k);
        }
        else{
            root->right = deleteNode(root->right, k);
        }
        return root;
    }
};