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
class Solution{

struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};
    public:
    Node* reverseList(Node* head){
        if(!head||!head->next)
            return head;
        Node* prev = NULL;
        Node* curr = head;
        Node* then = curr->next;
        while(curr){
            curr->next=prev;
            prev=curr;
            curr=then;
            if(then)
                then=then->next;
        }
        return prev;
    }
    
    
    Node* reverseBetween(Node* head, int m, int n)
    {
        int i=1;
        Node* iter=head;
        Node* prev=NULL;
        while(i<m&&iter){
            prev=iter;
            iter=iter->next;
            i++;
        }
        if(!iter)
            return head;
        Node* to_rev=iter;
        while(i<n&&iter){
            iter=iter->next;
            i++;
        }
        Node* then=NULL;
        if(iter){
        then = iter->next;
        iter->next=NULL;
        }
        
        
        to_rev=reverseList(to_rev);
        if(prev)
        prev->next=to_rev;
        else{
            head=to_rev;
        }
        while(to_rev->next){
            to_rev=to_rev->next;
        }
        to_rev->next=then;
        return head;
    }
};