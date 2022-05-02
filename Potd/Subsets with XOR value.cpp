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
class Solution {
    public:
   int subsetXOR(vector<int> v, int N, int K) {
int inf = 1000;
vector<vector<int>>dp(N+1, vector<int>(2000, 0));
sort(v.begin() ,v.end());
int maxi = 100;
for(int i = 0 ; i< N; i++)
{
for(int j = 0;j<=maxi; j++)
{
dp[i+1][j]+=dp[i][j];
if(v[i]==j)
dp[i+1][j]++;
if(dp[i][j]!=0)
dp[i+1][(j^v[i])]+=dp[i][j], maxi = max(maxi, j^v[i]);
}
}

return dp[N][K];
}
};