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
class Solution{
    
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 

public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * ptr1=headA;
        ListNode * ptr2=headB;
        
        int lenA=0,lenB=0;
        
        
        while(ptr1){
            lenA++;
            ptr1=ptr1->next;
        }
        
        while(ptr2){
            lenB++;
            ptr2=ptr2->next;
        }
        
         ptr1=headA;
         ptr2=headB;
        
        
        while(lenA<lenB){
            ptr2=ptr2->next;
            lenB--;
            
        }
        while(lenA>lenB){
            ptr1=ptr1->next;
            lenA--;
        }
        
         while(headA!=NULL){
             if(ptr1==ptr2){
                 return ptr1;
             }
             ptr1=ptr1->next;
             ptr2=ptr2->next;
         }
        return NULL;
    }
};