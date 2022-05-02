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
    int partyHouse(int N, vector<vector<int>> &adj){
        int mi = INT_MAX;
        for(int i=1; i<=N; i++){
            vector<bool> vis(N+1, 0);
            int cnt = 0;
            
            queue<int> q;
            q.push(i);
            
            while(!q.empty())
            {
                int n = q.size();
                bool f = 0;
                while(n--){
                    int x = q.front();
                    q.pop();
                    if(vis[x]) continue;
                    
                    vis[x] = 1;
                    
                    for(auto y: adj[x]){
                        if(!vis[y]){
                            f = 1;
                            q.push(y);
                        }
                    }
                    
                }
                if(!f) break;
                ++cnt;
            }
            
            mi = min(mi, cnt);
            
            
        }
        
        return mi;
        
        
    }
};