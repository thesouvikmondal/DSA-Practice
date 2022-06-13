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

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    
    ListNode* getmid(ListNode* head){
        ListNode* slw=head;
        ListNode* fst=head->next;
        while(fst && fst->next){
            slw=slw->next;
            fst=fst->next->next;
        }
        return slw;
    }
    
    
    ListNode* merge(ListNode* left , ListNode* right ){
        if(right==NULL) return left;
        if(left== NULL) return right;
        
        ListNode* ans= new ListNode(-1);
        ListNode* temp=ans;
        
        while(left && right){
            if(left->val < right->val){
                temp->next=left;
                temp=left;
                left=left->next;
            }
            else{
                temp->next=right;
                temp=right;
                right=right->next;
            }
        }
        
        while(right){
            temp->next=right;
            temp=right;
            right=right->next;
        }
        
        while(left){
            temp->next=left;
            temp=left;
            left=left->next;
        }
    
        ans=ans->next;
        return ans;
    }
    
    ListNode* sortList(ListNode* head) {
        if( head == NULL || head -> next == NULL ) {
            return head;
        }
        
        //divide into two nodes
        ListNode* mid=getmid(head);
        ListNode* left=head;
        ListNode* right=mid->next;
        mid->next=NULL;
        
        left = sortList(left);
        right = sortList(right);
    
        //merge both left and right halves
        ListNode* result = merge(left, right);

        return result;
        
    }
};