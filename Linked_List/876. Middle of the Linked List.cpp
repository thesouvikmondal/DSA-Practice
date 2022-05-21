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
    
    
    ListNode* middleNode(ListNode* head) {
        int i=0;
        int n=countNode(head)/2+1;
        ListNode* temp=head;
        int x=0;
        while(temp!=NULL){
            i++;
            if(i==n){
                return temp;
            }
            temp=temp->next;
            
        }
        return temp;
    }
};