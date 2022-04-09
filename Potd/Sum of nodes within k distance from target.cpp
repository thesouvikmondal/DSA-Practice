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

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}

class Solution{
    int ans = 0 , target;
    bool find = false;
    int recFunc(Node* root , int k , bool find){
        if(!root || k == 0) return 0;
        if(find == true){
            // cout << root->data << "\n";
            ans += root->data;
            recFunc(root->left , k-1 , true);
            recFunc(root->right , k-1 , true);
            return 1;
        }
        else if(root->data == target){
            // cout << root->data << "\n";
            this->ans += root->data;
            recFunc(root->left , k , true);
            recFunc(root->right , k , true);
            return k;
        }
        int r1 = recFunc(root->left , k , false);
        int r2 = recFunc(root->right , k , false);
        if(r1 > 0){
            // cout << root->data << "\n";
            ans += root->data;
            recFunc(root->right , r1-1 , true);
        }
        else if(r2 > 0){
            // cout << root->data << "\n";
            ans += root->data;
            recFunc(root->left , r2-1 , true);
        }
        return max(r1-1 , r2-1);
    }
public:
    int sum_at_distK(Node* root, int target, int k){
        this->target = target;
        recFunc(root , k , false);
        return ans;
    }
};