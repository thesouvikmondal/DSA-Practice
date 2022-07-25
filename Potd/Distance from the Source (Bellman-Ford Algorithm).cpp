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
class Solution{
    public:
     vector <int> bellman_ford(int V, vector<vector<int>> adj, int S) {
        vector<int> dp(V, 100000000);
        dp[S] = 0;
        for(int i = 0; i < V; i++){
            for(int j = 0; j < adj.size(); j++){
                if(dp[adj[j][0]] != 100000000){
                    dp[adj[j][1]] = min(dp[adj[j][1]], dp[adj[j][0]] + adj[j][2]);
                }
            }
        }
        return dp;
    }
};
