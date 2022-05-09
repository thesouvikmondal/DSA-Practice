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
	
	double dp[101][101][101];
	
	double solve(int i, int j, int n, int k)
	{
	    if(i < 0 || j < 0 || i >= n || j >= n) return 0;
	     
	    if(k == 0)
	        return 1;
	       
	    if(dp[i][j][k] != -1) return dp[i][j][k];
	        
	    double ans = 0;
	    
	    ans += solve(i-2, j+1, n, k-1);
	    ans += solve(i-2, j-1, n, k-1);
	    
	    ans += solve(i-1, j+2, n, k-1);
	    ans += solve(i-1, j-2, n, k-1);
	    
	    ans += solve(i+1, j+2, n, k-1);
	    ans += solve(i+1, j-2, n, k-1);
	    
	    ans += solve(i+2, j+1, n, k-1);
	    ans += solve(i+2, j-1, n, k-1);
	    
	    return dp[i][j][k] = ans;
	    
	}
	
	double findProb(int n,int x, int y, int k)
	{

        for(int i = 0; i <= 100; i++)
        {
            for(int j = 0; j <= 100; j++)
            {
                for(int ll = 0; ll <= 100; ll++)
                dp[i][j][ll] = -1;
            }
        }
        
	    double safe = solve(x, y, n, k);
	   
	   // cout << "safe = " << safe << endl;
	   
	    return (safe*1.0)/(pow(8,k)*1.0);
	}
};