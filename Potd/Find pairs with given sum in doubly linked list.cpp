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
#include <bits/stdc++.h>
using namespace std;


class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};

class Solution{
    public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
   {
       vector<pair<int , int>> result ;
       
       Node * low = head ;
       Node * high = head ;
       
       while(high -> next != NULL)
       {
           high = high -> next ;
       }
       
       while(low -> data < high -> data)
       {
           if(low -> data + high -> data == target)
           {
               result.push_back(make_pair(low -> data , high -> data)) ;
               low = low -> next ;
               high = high -> prev ;
           }
           
           else if(low -> data + high -> data > target)
               high = high -> prev ;
               
           else if(low -> data + high -> data < target)
               low = low -> next ;
       }
       
       return result ;
   }
};