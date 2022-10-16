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
class Solution {
public:

class ListNode{
    public:
int val;
    ListNode *next;
    ListNode(int x){
        val=x;
        next=NULL;
    }
};

ListNode *moveToFront(ListNode *head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        if(head == NULL || head->next == NULL){
            return head;
        }
        while(curr->next != NULL){
            prev = curr;
            curr = curr->next;
        }
        curr->next = head;
        prev->next = NULL;
        return curr;
    }
};
