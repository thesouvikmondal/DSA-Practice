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
    struct Node* left;
    struct Node* right;
};
vector<int> maximumValue(Node* node) {

        //code here

        vector<int> ans;

        if(node == NULL){

            return ans;

        }

        queue<Node*> q;

        q.push(node);

        while(q.empty() == false){

            int sz = q.size();

            int res = 0;

            for(int i = 0; i < sz; i++){

                auto curr = q.front();

                q.pop();

                res = max(res, curr->data);

                if(curr->left){

                    q.push(curr->left);

                }

                if(curr->right){

                    q.push(curr->right);

                }

            }

            ans.push_back(res);

        }

        return ans;

    }

};