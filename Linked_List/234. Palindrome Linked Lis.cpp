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

    bool isPalindrome(vector<int>a){
        int s=0,e=a.size()-1;
        if(a.size()<=1){
            return true;
        }
        while(s<e){
            if(a[s]!=a[e]){
                return false;
            }
        s++;e--;
        }
   return true;     
    }
    bool isPalindrome(ListNode* head) {
        vector<int> vec;
        while(head){
            vec.push_back(head->val);
            head=head->next;
        }
        return isPalindrome(vec);
    }
};