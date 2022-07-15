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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* p=list1;
        ListNode* q=list1;
        ListNode* r=list2;
        
        
        while(r->next!=NULL){
            r=r->next;
        }
        int cnt=0;
        while(cnt<a-1){
            p=p->next;
            cnt++;
        }
        
        int count=0;
        while(count<=b){
            q=q->next;
            count++;
        }
        
        p->next=list2;
        r->next=q;
        
        return list1;
    }
};