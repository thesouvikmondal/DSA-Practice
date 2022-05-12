#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <iterator>
using std::vector;
using std::string;
using std::min;
class Solution {
    public:
    bool dfs(int x, int y, vector<vector<int>>& grid, int &n, int &m){
        if(x < 0 || x == n || y < 0 || y == m || grid[x][y] == 0) return false;
        if(grid[x][y] == 2) return true;
        grid[x][y] = 0;
        return dfs(x - 1, y, grid, n, m) || dfs(x + 1, y, grid, n, m) || dfs(x, y + 1, grid, n, m) || dfs(x, y - 1, grid, n, m);
    }
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        int n = grid.size(), m = grid[0].size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    if(dfs(i, j, grid, n, m)) return true;
                }
            }
        }
        return false;
    }
};