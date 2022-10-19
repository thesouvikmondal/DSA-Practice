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
bool dfs(int node, int cnt, vector<int> &vis, vector<int> adj[])
    {
        vis[node] = 1;
        if (cnt == vis.size() - 1)
            if (count(vis.begin(), vis.end(), 1) == vis.size() - 1)
                return true;
        for (auto i : adj[node])
            if (!vis[i])
                if (dfs(i, cnt + 1, vis, adj))
                    return true;
        vis[node] = 0;
        return false;
    }
    bool check(int N, int M, vector<vector<int>> Edges)
    {
        // code here
        bool ans = false;

        vector<int> adj[N + 1];
        for (auto i : Edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<int> vis(N + 1);

        for (int i = 1; i <= N; i++)
            ans |= dfs(i, 1, vis, adj);
        return ans;
    }
};