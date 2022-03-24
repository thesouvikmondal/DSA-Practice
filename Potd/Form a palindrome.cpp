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
int dp[505][505];
class Solution{
    public:
    int solve(string s,int i,int j)
    {
        if(i==j || i>j) return 0;
        if(dp[i][j]!=-1)
        return dp[i][j];
        if(s[i]==s[j])
        return dp[i][j]=solve(s,i+1,j-1);
        else
        return dp[i][j]=1+min(solve(s,i+1,j),solve(s,i,j-1));
    }
    int findMinInsertions(string s){
        // code here 
        memset(dp,-1,sizeof(dp));
        return solve(s,0,s.length()-1);
    }
};