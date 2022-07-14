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
	struct Node *left, *right;
};


class Solution {
     public:
    int sum = 0;
    void transformTree(struct Node *root)
    {
        if(root==NULL){
            return;
        }
        transformTree(root->right);
        int temp = root->data;
        root->data = sum;
        sum += temp;
        transformTree(root->left);
    }
};