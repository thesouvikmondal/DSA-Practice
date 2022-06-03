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
//using divide the linklist from middle and reverse the 2nd part
public:
    ListNode* mid (ListNode * head){
        ListNode* slw=head;
        ListNode* fst=head->next;
        while(fst && fst->next){
            fst=fst->next->next;
            slw=slw->next;
        }
        return slw;
    }
    
    ListNode* reverse(ListNode* head){
        ListNode* cur=head;
        ListNode* pre=NULL;
        ListNode* nxt=NULL;
        while(cur){
            nxt=cur->next;
            cur->next=pre;
            pre=cur;
            cur=nxt;
        }
        return pre;
    }
   
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL) return true;
        
        ListNode* middle=mid(head);
        
        ListNode* temp=middle->next;
        
        middle->next=reverse(temp);
        
        ListNode* head1=head;
        ListNode* head2=middle->next;
        
        while(head2){
            if(head1->val!=head2->val){
                return false;
            }
            head1=head1->next;
            head2=head2->next;
        }
        
        temp=middle->next;
        
        middle->next=reverse(temp);
        
        return true;
        
    }
};

//     // using push in array 
// public:

//     bool isPalindrome(vector<int>a){
//         int s=0,e=a.size()-1;
//         if(a.size()<=1){
//             return true;
//         }
//         while(s<e){
//             if(a[s]!=a[e]){
//                 return false;
//             }
//         s++;e--;
//         }
//    return true;     
//     }
//     bool isPalindrome(ListNode* head) {
//         vector<int> vec;
//         while(head){
//             vec.push_back(head->val);
//             head=head->next;
//         }
//         return isPalindrome(vec);
//     }
// };