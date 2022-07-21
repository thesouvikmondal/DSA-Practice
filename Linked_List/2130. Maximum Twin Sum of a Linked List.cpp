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
    int pairSum(ListNode* head) {
        vector<int> vec;
        while(head){
            vec.push_back(head->val);
            head=head->next;
        }
        int i=0,j=vec.size()-1;
        int m=INT_MIN;
        while(i<j){
            m=max(m,(vec[i]+vec[j]));
            i++;
            j--;
        }
        return m;
    }
};