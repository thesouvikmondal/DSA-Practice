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
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

int countNodesinLoop(Node* head);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        cout<< countNodesinLoop(head) << endl;
    }
	return 0;
}

int countNodesinLoop(struct Node *head)
{
    // Code here
    if(head == NULL){
       return 0;
   }
   bool isloop = false;
   int len = 0;
   Node *slow = head, *fast = head;
   while(fast && fast->next){
       slow = slow->next;
       fast = fast->next->next;
       if(slow == fast){
           isloop = true;
           break;
       }
   }
   if(isloop){
       slow = head;
       while(slow != fast){
           slow = slow->next;
           fast = fast->next;
       }
       do{
         len++;
         fast = fast->next;
       }while(fast != slow);
   }
   return len;
}