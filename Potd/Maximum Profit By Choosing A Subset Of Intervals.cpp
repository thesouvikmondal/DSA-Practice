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
private:
    int dp[10001];
    int solve(int i,vector<vector<int>> &arr){
        if(i >= arr.size()) return 0;
        if(dp[i] != -1) return dp[i];
        
        int next_jump = arr.size(), low = i+1, high = arr.size()-1;
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid][0] >= arr[i][1]) next_jump = mid, high = mid-1;
            else low = mid+1;
        }
        
        int op1 = arr[i][2] + solve(next_jump,arr);
        int op2 = solve(i+1,arr);
        
        return dp[i] = max(op1,op2);
    }
public:
    int maximum_profit(int n, vector<vector<int>> &intervals) {
        sort(intervals.begin(),intervals.end());
        memset(dp,-1,sizeof dp);
        return solve(0,intervals);
    }
};