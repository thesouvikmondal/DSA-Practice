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
    struct Node *next;
    struct Node *prev;
    
    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};

class Solution{
public:
    Node* partition(Node *l, Node *h){
       Node* pivot = h;
       Node* i = l;
       Node* j = l;
       
       while(j != h){
           if(j -> data < pivot -> data){
               std::swap(&i->data, &j->data);
               i = i -> next;
           }
           j = j -> next;
       }
       std::swap(&i->data, &h->data);
       return i;
   }
};