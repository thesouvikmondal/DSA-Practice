#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
using std::vector;
using std::string;
using std::max;
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};
class Solution
{
    public:
    Node* insertionSort(struct Node* head_ref)
    {
        //code here
        Node* curr = head_ref;
        struct Node* start = new Node(-1);
        start->next = curr;
        
        struct Node* prev = start;
        
        while(curr)
        {
            if(curr->next && (curr->data > curr->next->data))
            {
                while(prev->next && (prev->next->data < curr->next->data))
                    prev = prev->next;
                    
                struct Node* temp = curr->next;
                curr->next = curr->next->next;
                
                temp->next = prev->next;
                prev->next = temp;
                
                prev = start;
            }
            else
            {
                curr = curr->next;
            }
        }
        
        return start->next;
    }
    
};