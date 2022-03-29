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
vector<int> FindWays(vector<vector<int>>&mat){
    // Code here
    int n =  mat.size();
    int mod = 1e9 + 7;
    pair<int,int> dp[n][n];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            dp[i][j] = {0,mat[i][j]};
        }
    }
    dp[0][0].first = 1;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            int up = 0, left = 0, usum = 0, lsum = 0;
            if(i>0&& (mat[i-1][j]==2||mat[i-1][j]==3) && dp[i-1][j].first){
                up = dp[i-1][j].first;
                usum = dp[i-1][j].second;
            }
            if (j > 0 && (mat[i][j - 1] == 1 or mat[i][j - 1] == 3) && dp[i][j - 1].first)
            {
                left = dp[i][j - 1].first;
                lsum = dp[i][j - 1].second;
            }
            dp[i][j] = {max(dp[i][j].first, (left + up) % mod),(dp[i][j].second + max(lsum, usum)) % mod};
        }
    }
     vector<int> ans(2);
    ans[0] = (dp[n - 1][n - 1].first % mod);
    ans[1] = ((dp[n - 1][n - 1].first ? dp[n - 1][n - 1].second : 0));
    return ans;
}
};