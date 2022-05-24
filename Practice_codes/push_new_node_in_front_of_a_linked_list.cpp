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
//create the node 
struct node{
    int data;
    node *next;
};


/* -------  Print the Linked List  -------*/
void printList (node *n){
    int count=0;
    while(n!=NULL){
        cout<<n->data<<endl;
        n = n->next;
    }
}


void push(node **head_ref , int data){
    node *newNode=new node();
    newNode->data=data;
    newNode->next= *head_ref;
    *head_ref= newNode;

}

int main(){
     node *head = NULL;
    push(&head , 5);
    push(&head , 7);
    push(&head , -3);
    
    printList(head);
}