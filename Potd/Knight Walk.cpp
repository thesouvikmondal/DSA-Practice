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
    vector<int> d={1,2,-1,2,1,-2,-1,-2,1};
	int minStepToReachTarget(vector<int>&KnightPos, vector<int>&TargetPos, int n){
	    // Code here
	    vector<vector<bool>> vis(n+1,vector<bool>(n+1,0));
	    int ans=0;
	    queue<pair<int,int>> q;
	    q.push({KnightPos[0],KnightPos[1]});
	    vis[KnightPos[0]][KnightPos[1]]=1;
	    while(!q.empty())
	    {
	        int sz=q.size();
	        while(sz--)
	        {
	            int x=q.front().first;
	            int y=q.front().second;
	            q.pop();
	            if(x==TargetPos[0] && y==TargetPos[1])
	            return ans;
	            for(int i=0;i<8;i++)
	            {
	                int a=x+d[i],b=y+d[i+1];
	                if(a>=1 && b>=1 && a<=n && b<=n && !vis[a][b])
	                {   
	                    q.push({a,b});
	                    vis[a][b]=1;
	                }
	            }
	        }
	        ans++;
	    }
	    return -1;
	}
};