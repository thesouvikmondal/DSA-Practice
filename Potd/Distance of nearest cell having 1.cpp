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
vector<vector<int>>nearest(vector<vector<int>>& grid)
	{
	    int n = grid.size();
	    int m = grid[0].size();
	    vector<vector<int>> ans(n, vector<int>(m, 1e9));
	    for(int i = 0;i<n;i++)
	    {
	        for(int j = 0;j<m;j++)
	        {
	            if(grid[i][j] == 1)
	            {
	                ans[i][j] = 0;
	            }
	        }
	    }
	    for(int i = n-1;i>=0;i--)
	    {
	        for(int j = m-1;j>=0;j--)
	        {
	            if(i == n-1 && j == m-1)    continue;
	            if(i == n-1)
	            {
	                ans[i][j] = min(ans[i][j], ans[i][j+1] + 1);
	            }
	            else if(j == m-1)
	            {
	                ans[i][j] = min(ans[i][j], ans[i+1][j] + 1);
	            }
	            else
	            {
	                ans[i][j] = min({ans[i][j], ans[i][j+1] + 1, ans[i+1][j] + 1});
	            }
	        }
	    }
	    for(int i = 0;i<n;i++)
	    {
	        for(int j = 0;j<m;j++)
	        {
	            if(i == 0 && j == 0)    continue;
	            if(i == 0)
	            {
	                ans[i][j] = min(ans[i][j], ans[i][j-1] + 1);
	            }
	            else if(j == 0)
	            {
	                ans[i][j] = min(ans[i][j], ans[i-1][j] + 1);
	            }
	            else
	            {
	                ans[i][j] = min({ans[i][j], ans[i-1][j] + 1, ans[i][j-1] + 1});
	            }
	        }
	    }
	    return ans;
	}
};