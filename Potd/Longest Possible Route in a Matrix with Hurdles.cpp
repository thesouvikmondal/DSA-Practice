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
    int R, C;
    vector<pair<int,int>> dirs = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
   

    int dfs(int r, int c, int rd, int cd, vector<vector<int>> matrix, map<pair<int,int>,bool> &seen){
        if(r < 0 or c < 0 or r >= R or c >= C) return INT_MIN;
        if(matrix[r][c] == 0) return INT_MIN;
        if(r == rd and c == cd){
            return 0;
        }
        
        seen[{r, c}] = true;
        
        int ans = INT_MIN;
        for(auto dxy: dirs){
            int newr = dxy.first + r;
            int newc = dxy.second + c;
            
            if(seen.find({newr, newc}) == seen.end() or !seen[{newr, newc}]){
                seen[{newr, newc}] = true;
                ans = max(ans, dfs(newr, newc, rd, cd, matrix, seen));
                seen[{newr, newc}] = false;
            }
        }
        
        if(ans != INT_MIN) return ans+1;
        else return ans;
    }

    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd)
    {
        // code here
        R = matrix.size();
        C = matrix[0].size();
        
        map<pair<int,int>,bool> seen;
        int res = dfs(xs, ys, xd, yd, matrix, seen);
        
        if(res == INT_MIN) return -1;
        else return res;
        
    }
};