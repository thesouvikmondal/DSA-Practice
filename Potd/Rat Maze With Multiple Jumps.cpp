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
class Solution {
    public:
	bool isValid(int x,int y,int n)
    {
        if(x<0 || x>=n || y<0 || y>=n) return false;
        return true;
    }
    bool generate(vector<vector<int>>&matrix,int x,int y,int n,vector<vector<int>>&v)
    {
        if(x==n-1 && y==n-1) return true;
        for(int i=1;i<=matrix[x][y];i++)
        {
            if(isValid(x,y+i,n))
            {
                v[x][y+i]=1;
                if(generate(matrix,x,y+i,n,v)) return true;
                v[x][y+i]=0;
            }
            if(isValid(x+i,y,n))
            {
                v[x+i][y]=1;
                if(generate(matrix,x+i,y,n,v)) return true;
                v[x+i][y]=0;
            }
        }
        return false;
    }
	vector<vector<int>> ShortestDistance(vector<vector<int>>&matrix){
	   // Code here
	   int n=matrix.size();
	   vector<vector<int>> v(n,vector<int>(n,0));
	   generate(matrix,0,0,n,v);
	   v[0][0]=1;
	   if(v[n-1][n-1]==0)
	   {
	       vector<vector<int>> ans(1,vector<int>(1,-1));
	       return ans;
	   }
	   return v;
	}

};