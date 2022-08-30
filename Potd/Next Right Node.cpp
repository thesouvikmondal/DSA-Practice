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
    struct Node *left;
    struct Node *right;
    struct Node *next;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

class Solution{

    public:
    Node *nextRight(Node *root, int key)
   {
      queue<Node*>q;
      q.push(root);  
      while(!q.empty()){
          int size=q.size();
          for(int i=0;i<size;i++){
              Node*temp=q.front();
              q.pop();
              if(temp->left)
              q.push(temp->left);
              if(temp->right)
              q.push(temp->right);
              if(i!=size-1 && temp->data==key){
                  return q.front();
              }
          }
      }
      return new Node(-1);
   }
};