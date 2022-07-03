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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        ListNode* temp=head;
        
        while(temp){
            ListNode* tempNxt = temp->next;
            bool found = false;
            while(tempNxt){
                if(temp && temp->val < tempNxt->val){
                    ans.push_back(tempNxt->val);
                    found = true;
                    break;
                }
                tempNxt = tempNxt->next;
            }
            if(found==false)  ans.push_back(0);
            temp=temp? temp->next : NULL;
        }
        
        return ans;
    }
};