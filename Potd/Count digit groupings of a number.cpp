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
	int solve(string s, int i, int sum, vector<vector<int>> &dp) {
        if(i == s.length())
            return 1;
    
        if(dp[i][sum] != -1)
            return dp[i][sum];
    
        int curSum = 0;
        int ans = 0;
        for(int k = i; k < s.length(); k++) {
            curSum += s[k]-'0';
            if(curSum >= sum)
                ans += solve(s, k+1, curSum, dp);
        }
        return dp[i][sum] = ans;
    }

	int TotalCount(string s){
        vector<vector<int>> dp(s.length(), vector<int> (901,-1));
        return solve(s, 0, 0, dp);
	}

};