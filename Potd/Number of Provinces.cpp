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
class Solution {
    public:
   void dfs(vector<vector<int>> adj, vector<bool> &vis,  int start, int V){
       vis[start] = true;
       
       for(int i = 0;i < V;i++){
           if(start  != i && adj[start][i] && !vis[i]){
               dfs(adj,vis,i,V);
           }
       }
   }
   int numProvinces(vector<vector<int>> adj, int V) {
       if(V == 0)
           return 0;
       if(V == 1)
           return 1;
       
       vector<bool> vis(V, false);
       // vis[0] = true;
       int ans  = 0;
       for(int  i = 0; i < V;i++){
           if(!vis[i]){
               ans++;
               dfs(adj,vis, i, V);
           }
       }
       return ans;
   }
};