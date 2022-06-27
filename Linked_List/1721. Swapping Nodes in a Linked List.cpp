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
    void swap(int i,int j, vector<int>&v){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    
    }
    
    ListNode* swapNodes(ListNode* head, int k) {
        int count=0;
        ListNode* temp=head;
        ListNode* temp2=head;
        vector<int> v;
        while(temp){
            v.push_back(temp->val);
            count++;
            temp=temp->next;
        }
        
        swap(k-1,count-k,v);
        int i=0;
        while(temp2){
            temp2->val = v[i];
            i++;
            temp2 = temp2->next;
            
        }
        
        return head;
    }
};