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
    int coeff;
    int pow;
    struct Node* next;
    
    Node(int c, int p){
        coeff = c;
        pow = p;
        next = NULL;
    }
    
};


class Solution{
  public:
    /* The below method print the required sum of polynomial
    p1 and p2 as specified in output  */
    Node* addPolynomial(Node *p1, Node *p2)
    {
        //Your code here
        Node *temp, *ans;
        if (p1->pow == p2->pow) {
            ans=temp=new Node(p1->coeff+p2->coeff, p1->pow);
            p1 = p1->next;
            p2 = p2->next;
        } else if(p1->pow > p2->pow) {
            ans=temp=new Node(p1->coeff, p1->pow);
            p1 = p1->next;
        } else {
            ans=temp=new Node(p2->coeff, p2->pow);
            p2 = p2->next;
        }
        
        while (p1!=nullptr and p2!=nullptr) {
            if (p1->pow==p2->pow) {
                temp->next = new Node(p1->coeff+p2->coeff, p1->pow);
                p1 = p1->next;
                p2 = p2->next;
            } else if(p1->pow > p2->pow) {
                temp->next=new Node(p1->coeff, p1->pow);
                p1 = p1->next;
            } else {
                temp->next=new Node(p2->coeff, p2->pow);
                p2 = p2->next;
            }
            
            temp = temp->next;
        }
        
        while (p1!=nullptr) {
            temp->next=new Node(p1->coeff, p1->pow);
            p1 = p1->next;
            temp = temp->next;
        }
        
        while (p2!=nullptr) {
            temp->next=new Node(p2->coeff, p2->pow);
            p2 = p2->next;
            temp = temp->next;
        }
        
        return ans;
    }
};