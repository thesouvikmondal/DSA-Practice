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
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};

void insert(Node** root,int item){
    Node* temp=new Node;
    temp->data=item;
    temp->next=*root;
    *root=temp;

}


Node *create(int a[],int n){
    struct Node *root=NULL;
    for(int i=n-1;i>=0;i--){
        insert(&root,a[i]);
    }
    return root;
}

void display(struct Node *p)
{
    while(p!=NULL){
    cout<<p->data<<" ";
    p=p->next;
    }
    
    
};



int main(){
    int a[]={1,2,4,5,5};
    
    Node* root = create(a, 5);
    display(root);
}

