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
int help(int N,vector<int> &arr,int start,int end,vector<vector<int>> &dp){

        if(start>end)return 0;

        if(dp[start][end]!=-1)return dp[start][end];

        int temp = 1;

        if(start!=0){

            temp*=arr[start-1];

        }

        if(end!=N-1){

            temp*=arr[end+1];

        }

        for(int i=start;i<=end;i++){

            int t = arr[i]*temp;

            dp[start][end]=max(dp[start][end],t+help(N,arr,start,i-1,dp)+help(N,arr,i+1,end,dp));

        }

        return dp[start][end];

    }

    int maxCoins(int N, vector<int> &arr) {

        vector<vector<int>> dp(N,vector<int>(N,-1));

        return help(N,arr,0,N-1,dp);

    }
};