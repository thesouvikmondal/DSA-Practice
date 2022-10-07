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
	int key;
	Node *left, *right;
};

void flatten(Node *root)

    {

        //code here

        while(root!=NULL)

        {

            if(root->left!=NULL)

            {

                Node* pre=root->left;

                while(pre->right!=NULL)

                pre=pre->right;

    

                pre->right=root->right;

                root->right=root->left;

                root->left=NULL;

            }

        root=root->right;

        }

        

    }
};