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

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};



class Solution{
    public:    
    bool isCompleteBT(Node* root){
        queue<Node*> q;
        q.push(root);
        bool foundNull = false;
        while(q.empty() == false){
            Node* curr = q.front();
            q.pop();
            if(curr == NULL){
                foundNull = true;
                continue;
            }
            if(curr != NULL){
                if(foundNull == true){
                    return false;
                }
                q.push(curr->left);
                q.push(curr->right);
            }
        }
        return true;
    }
};