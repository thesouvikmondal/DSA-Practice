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
using namespace std;
class Solution{
    public:
    public:
    vector<int> findOrder(int n, int m, vector<vector<int>> pre) 
   {
       vector<vector<int>> adj(n);
       vector<int> in(n,0);
       for(auto i:pre)
       {
       adj[i[1]].push_back(i[0]);
       in[i[0]]++;
       }
       queue<int> q;
       vector<int> ans;
       for(int i=0;i<n; i++)
       {
           if(in[i] == 0)
           q.push(i);
       }
       int count =0;
       while(!q.empty())
       {
           int node = q.front();
           q.pop();
           ans.push_back(node);
           count++;
           for(auto it:adj[node])
           {
               if(--in[it] == 0)
               q.push(it);
           }
       }
       if(n != count)
       return {};
       return ans;
       
   }
};