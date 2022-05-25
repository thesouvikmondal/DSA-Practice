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

//push a  node in front of a linked list

void push(node **head_ref , int data){
    node *newNode=new node();
    newNode->data=data;
    newNode->next= *head_ref;
    *head_ref= newNode;

}

//add a new node in middle of a linked list

void pushAfter(node *previous_node , int data){
    node *newNode = new node();
    newNode->data=data;
    newNode->next= previous_node->next;
    previous_node->next= newNode;

}

// //add a new node in the last of a linked list

// void pushEnd(node **head_ref, int data){
//     node *newNode=new node();
//     newNode->data=data;
//     newNode->next=NULL;
//     node *last=*head_ref;
//     if(*head_ref==NULL){
//         *head_ref=newNode;
//         return;
//     }
//     while(last->next!=NULL){
//         last=last->next;
//     }

//     last->next=newNode;
//     return;
// }


int main(){
     node *head = NULL;
    push(&head , 5);
    push(&head , 7);
    push(&head , -3);
    push(&head , 8);
    
    pushAfter(head->next->next,65);

   // pushEnd(&head,77);


    printList(head);
}

