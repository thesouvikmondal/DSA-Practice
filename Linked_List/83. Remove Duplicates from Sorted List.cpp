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
    ListNode* deleteDuplicates(ListNode* head) {
          if(!head || !head->next) return head;
        ListNode* temp =head;
        
        while(temp && temp->next){
            if(temp->val == temp->next->val)
                temp->next = temp->next->next;
            else
                temp= temp->next;
        }
        return head;
    }
};