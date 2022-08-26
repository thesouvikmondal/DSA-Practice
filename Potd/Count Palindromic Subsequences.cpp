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
    long long mod = 1e9 + 7;
    long long travel(string &str, vector<vector<uint64_t>>&dp, int i, int j){
        if(i > j){
            return 0;
        }
        if(i == j){
            return 1;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        if(str[i] == str[j]){
            return dp[i][j] = (1 + travel(str, dp, i, j - 1)%mod  + travel(str, dp, i + 1 , j) %mod) % mod;
        }
        else
            return dp[i][j] = (mod + travel(str, dp, i + 1, j)%mod + travel(str, dp, i, j - 1)%mod - travel(str, dp, i + 1, j - 1) %mod)%mod;
    }
    
    
    
    long long int  countPS(string str)
    {
        int n = str.length();
        vector<vector<uint64_t>> dp(n, vector<uint64_t> (n, -1));
        return travel(str, dp,  0, n - 1);
    }
};