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
    ListNode* mergeNodes(ListNode* head) {
       if(head==NULL && head->next==NULL){
           return NULL;
       }
       
        ListNode* curr=head->next;
        while(curr!=NULL){
            if(curr->next->val==0){
                curr->next=curr->next->next;
                curr=curr->next;
            }
            else{
                curr->val=curr->val+curr->next->val;
                curr->next=curr->next->next;
            }
            
        }
        return head->next;
            
    }
};