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
    set<int>s;
int dp[101][10001];
void solve(int sum,vector<int>&nums,int n){
    if(n==0) {
        s.insert(sum);
        return;
    }
    if(dp[n][sum]==1) return ;
    solve(sum+nums[n-1],nums,n-1);
    solve(sum,nums,n-1);
    dp[n][sum]=1;
}
	vector<int> DistinctSum(vector<int>nums){
	    	vector<int>ans;
	    	memset(dp,-1,sizeof(dp));
	    	int n=nums.size();
	    	solve(0,nums,n);
	    	for(auto it:s){
	    	    ans.push_back(it);
	    	}
	       return ans;
	}
};