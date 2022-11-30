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
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};


   void reorderList(Node* head) {
        // Your code here
        Node *node=new Node(head->data);
        Node *ans=node;
        Node *temp = head;
        vector<int>v;
        while(temp){
            v.push_back(temp->data);
            temp=temp->next;
        }
        if(v.size()<=2)return;
        int l=1,h=v.size()-1;
        while(l<=h){
            Node *dummy1=new Node(v[l]);
            Node *dummy2=new Node(v[h]);
            if(l==h){
                node->next=dummy2;
                node=node->next;
            }
            else{
                node->next=dummy2;
                node=node->next;
                node->next=dummy1;
                node=node->next;
            }
            l++;
            h--;
        }
        *head=*ans;
    }

};