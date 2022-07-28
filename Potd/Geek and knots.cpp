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
    #define ll long long
   const int mod = 1e9+7;
   int knots(int m, int n, int k){
       // code here
       ll a = solve(n, k);
       ll b = solve(m, k);
       
       ll ans = (a*b)%mod;
       return ans;
   }
   
   ll solve(int n, int r) {
       ll dp[n+1][r+1];
       r = min(n-r,r);
       memset(dp, 0, sizeof(dp));
       for(int i=0; i<=n; i++) dp[i][0] = 1;
       for(int i=1; i<=n; i++) {
           for(int j=1; j<=r; j++) {
               dp[i][j] = (dp[i-1][j-1]%mod + dp[i-1][j]%mod)%mod;
           }
       }
       return dp[n][r];
   }
};