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
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return false;
        }
        ListNode* slw=head;
        ListNode* fst=head->next;
        
        while(slw!=fst){
            if(fst==NULL || fst->next==NULL){
                return false;
            }
            
            slw=slw->next;
            fst=fst->next->next;
                
        }
        
        return true;
        
    }
};