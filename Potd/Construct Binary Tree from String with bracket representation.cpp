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


class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

 Node* solve(string str, int start, int end){
        if(start > end){
            return NULL;
        }
        
        int i = start;
        while(i <= end){
            char c = str[i];
            if(c -'0' >= 0 && c -'0' <= 9){
                i++;
            }
            else{
                break;
            }
        }
        int node = stoi(str.substr(start, i-start));
        Node* root = new Node(node);
        
        int j = i;
        stack<char> stk;
        while(j <= end){
            char c = str[j];
            if(c == ')'){
                stk.pop();
            }
            else if(c == '('){
                stk.push('(');
            }
            if(stk.empty())
                break;
            j++;
        }
        root->left = solve(str, i+1, j-1);
        if(j+2 < end){
            root->right = solve(str, j+2, end-1);
        }
        
        return root;
    }

    // function to construct tree from string
    Node *treeFromString(string str){
        if(str == "")
            return NULL;
        
        return solve(str, 0, str.length()-1);
    }
};