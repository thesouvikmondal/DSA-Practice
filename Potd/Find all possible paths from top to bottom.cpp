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
    vector<vector<int>>ans;
  
   void solve(vector<vector<int>> grid, int x,int y,vector<int>v){
       // base case
       if(x==grid.size()-1 and y==grid[0].size()-1){
           v.push_back(grid[x][y]);
           ans.push_back(v);
           return;
       }
       
       
       // condition
       if(x!=grid.size()-1){
           v.push_back(grid[x][y]);
           solve(grid,x+1,y,v);
           v.pop_back();
       }
       
       if(y!=grid[0].size()-1){
           v.push_back(grid[x][y]);
           solve(grid,x,y+1,v);
           v.pop_back();
       }
       return;
   }
   vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
   {
       // code here
       vector<int>v;
       solve(grid,0,0,v);
       return ans;
   }
};