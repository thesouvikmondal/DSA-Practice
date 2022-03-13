#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
using std::vector;
using std::string;
using std::max;
using namespace std;
class Solution {
public:
	 int mod= 1e9+7;
	int FindWays(int n, int m, vector<vector<int>>blocked_cells){
	   map<pair<int, int>, bool> mp;
	   vector<vector<int>> dp(n, vector<int>(m, 0));
	   for(auto i: blocked_cells) mp[{i[0]-1, i[1]-1}]=1;
	   for(int i=0; i<n; i++){
	       for(int j=0; j<m; j++){
	           if(mp[{i, j}]==1) {
	               dp[i][j]=0;
	           }
	           else if(i==0 && j==0){
	               dp[i][j]=1;
	           }
	           else{
	               if(i>0) dp[i][j] += dp[i-1][j];
	               if(j>0) dp[i][j] += dp[i][j-1];
	           }
	       }
	   }
	   return dp[n-1][m-1]%mod;
	}
};