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
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
void solve(Node* root, int &sum, int &k){
    if(root==NULL)
        return;
    solve(root->left, sum, k);
    if(k-->0)
        sum+=root->data;
    solve(root->right, sum, k);
}

int sum(Node* root, int k) 
{
    int sum=0;
    solve(root, sum, k);
    return sum;
} 