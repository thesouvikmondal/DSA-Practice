#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
using std::vector;
using std::string;
using std::max;
using namespace std;
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
class Solution{
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    {
           // Your code here
            Node *head = nullptr, *cur = nullptr;
           
           bool f = true;
           
           while(f)
           {
               f = false;
               
               int Min = INT_MAX, minP = -1;
               
               for(int i=0; i<K; i++)
               {
                   if(arr[i] and arr[i]->data < Min)
                   {
                       f = true;
                       Min = arr[i]->data;
                       minP = i;
                   }
               }
               
               if(f)
               {
                   if(!head)
                    head = cur = arr[minP];
                    
                   else
                   {
                       cur->next = arr[minP];
                       cur = cur->next;
                   }
                   
                   arr[minP] = arr[minP]->next;
               }
           }
           
           return head;
           
    }
};