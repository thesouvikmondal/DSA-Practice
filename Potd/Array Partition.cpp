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
    int dp[1000001];
    bool solve(int st,vector<int> &arr,int k,int m){
        int n = arr.size();
        if(st >= n) return true;
        if(dp[st] != -1) return dp[st];
        for(int i=st+k-1;i<n;i++){
            int sub = abs(arr[i] - arr[st]);
            if(sub > m) break;
            bool next = solve(i+1,arr,k,m);
            if(next) return dp[st] = true;
        }
        return dp[st] = false;
    }
    bool partitionArray(int n, int k, int m, vector<int> &arr){
        sort(arr.begin(),arr.end());
        memset(dp,-1,sizeof dp);
        return solve(0,arr,k,m);
    }
};