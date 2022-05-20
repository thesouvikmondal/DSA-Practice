#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <iterator>
#include <set>
using std::vector;
using std::max;
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    int countNode(ListNode* head){
        int cnt=0;
        ListNode* temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
    
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        int i=countNode(head)-1;
        int x=0,ans=0;
        while(temp!=NULL){
            x=temp->val;
            ans=ans+pow(2,i)*x;
            i--;
            temp=temp->next;
            
        }
        return ans;
    }
};