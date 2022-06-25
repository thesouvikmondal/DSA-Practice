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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dumy=new ListNode(0);
        ListNode* temp=dumy;
        int carry=0;
        while(l1 || l2 || carry){
            int x=l1?l1->val:0;
            int y=l2?l2->val:0;
            
            temp->next=new ListNode((x+y+carry)%10);
            temp=temp->next;
            carry= (carry+x+y)/10;
            
            if(l1){
                l1=l1->next;
            }
            if(l2){
                l2=l2->next;
            }
            
        }
        
        return dumy->next;
    }
};