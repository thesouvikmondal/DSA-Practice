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
#define pii pair<int,int>
    int minimumCost(vector<vector<int>>& flights, int n, int k) {
        // code here
        vector<vector<pair<int,int>>>adj(n+1);
        for(auto flight:flights){
            int src=flight[0],des=flight[1],c=flight[2];
            adj[src].push_back({des,c});
        }
        vector<int>dis(n+1,INT_MAX);
        priority_queue<pii,vector<pii>,greater<pii>>pq;
        pq.push({0,k});
        dis[k]=0;
        while(!pq.empty()){
            auto node=pq.top();
            pq.pop();
            int src= node.second, costTillNow=node.first;
            for(auto it:adj[src]){
                int dest=it.first,cost=it.second;
                if(costTillNow+cost<dis[dest]){
                    dis[dest]=costTillNow+cost;
                    pq.push({costTillNow+cost,dest});
                }
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(dis[i]==INT_MAX) return -1;            // can't reach this node
            ans=max(ans,dis[i]);
        }
        return ans;
    }
};