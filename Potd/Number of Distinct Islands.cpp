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
int countDistinctIslands(vector<vector<int>>& grid) {
            int n = grid.size(), m = grid[0].size();
            
            unordered_set<string> ilands;
            for(int r = 0; r < n; r++){
                for(int c = 0; c < m; c++){
                    if(grid[r][c] == 1){
                        string land = findIland(grid,r,c,n,m);
                      //  cout << land << "\n";
                        ilands.insert(land);
                    }
                }
            }
            
            return ilands.size();
    }
    
    string findIland(vector<vector<int>>& grid,int r,int c,int& n,int& m){
        if((r >= n) || r < 0 || (c >= m) || c < 0 || (grid[r][c] == 0))
            return "";
        
        grid[r][c] = 0;
        
        string iland = "1";
        
        //up
        iland += ("u" + findIland(grid,r-1,c,n,m));
        
        //right
        iland += ("r"+findIland(grid,r,c+1,n,m));
        
        //down
        iland += ("d"+findIland(grid,r+1,c,n,m));
        
        //left
        iland += ("l"+findIland(grid,r,c-1,n,m));
        
      //  cout << iland << "\n";
        return iland;
    }
};