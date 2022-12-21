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
struct Node
{
    Node* next;
    int data;
};
Node* sortList(Node* head)
    {
        // Your Code Here
        if(head == NULL || head->next == NULL) return head;
        Node * curr = head->next,*prev=head;
        while(curr!=NULL){
            if(curr->data < 0){
                prev->next = curr->next;
                curr->next = head;
                head = curr;
                curr = prev;
            }
            prev = curr;
            curr = curr ->next;
        }
        return head;
    }
};