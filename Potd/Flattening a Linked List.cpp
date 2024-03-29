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

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};

    Node *flatten(Node *root)
    {
       Node* line= root->next;
         while(line!=NULL){
              Node* t=line;
              Node* p=root;
              Node* p_pre=NULL;
            while(t!=NULL&&p!=NULL){
                if(p->data>=t->data&&p==root){
                       p_pre=t;
                      t=t->bottom;
                      p_pre->bottom=p;
                      root=p_pre;
                  }
                else if(p->data>=t->data){
                     p_pre->bottom=t;
                    t=t->bottom;
                    p_pre=p_pre->bottom;
                    p_pre->bottom=p;
                }
                else{
                    p_pre=p;
                    p=p->bottom;
                }
           }
           if(p==NULL&&t!=NULL)
              p_pre->bottom=t;
            
           line=line->next;
       }
      return root;  
    }
};