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
	void dfs( vector<int>adj[],int &count,int s,int d){
        if(s==d){
            count++;
            return;
        }
        for(int v:adj[s]){
           dfs(adj,count,v,d);
        }
    }
	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    // Code here
	    vector<int>adj[n];
	    for(int i=0;i<edges.size();i++){
	        adj[edges[i][0]].push_back(edges[i][1]);
	    }
         int ans=0;
	     dfs(adj,ans,s,d);
	     return ans;
	}
};