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
public:
int isStackPermutation(int N,vector<int> &A,vector<int> &B){
       stack<int> s;
       int a=0;
       for(auto i:A){
           s.push(i);
           while(!s.empty() and s.top() == B[a]){
               s.pop();
               a++;
           }
       }
       if(a == N) return true;
       return false;
   }
};