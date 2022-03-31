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
     void dfs(vector<int> graph[], int node, int dist[],  
                                    bool vis[], int c) 
{ 
    if (vis[node]) { 
        return; 
    } 
    // Set flag as true for current 
    // node in visited array 
    vis[node] = true; 
  
    // Insert the distance in 
    // dist array for current 
    // visited node u 
    dist[node] = c; 
  
    for (int i = 0; i < graph[node].size(); i++) { 
        // If its neighbours are not vis, 
        // run dfs for them 
        if (!vis[graph[node][i]]) { 
            dfs(graph, graph[node][i], dist, vis, c + 1); 
        } 
    } 
} 
  
int countOfNodes(vector<int> graph[], int n) 
{ 
    // bool array to 
    // mark visited nodes 
    bool vis[n + 1] = { false }; 
  
    // Integer array to 
    // compute distance 
    int dist[n + 1] = { 0 }; 
  
    dfs(graph, 1, dist, vis, 0); 
  
    int even = 0, odd = 0; 
  
    // Traverse the distance array 
    // and count the even and odd levels 
    for (int i = 1; i <= n; i++) { 
        if (dist[i] % 2 == 0) { 
            even++; 
        } 
        else { 
            odd++; 
        } 
    } 
  
    int ans = ((even * (even - 1)) + (odd * (odd - 1))) / 2; 
  
    return ans; 
        // code here
    }
};