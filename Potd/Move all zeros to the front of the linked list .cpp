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
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void moveZeroes(struct Node **head)
{
    Node * temp = *head;
    
    while (temp->next)
    {
        Node *ptr=temp->next;
        
        if (ptr->data==0)
        {
            temp -> next = ptr->next;
            ptr -> next = *head;
            *head = ptr;
        }
        
        else
        {
            temp = temp->next;
        }
    }
    //Your code here
}