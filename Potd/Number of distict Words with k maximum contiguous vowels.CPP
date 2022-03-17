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
#define mod 1000000007
typedef long long ll;
ll n,k;
ll dp[1001][1001];
ll solve(ll curr,ll ind)
{
    ll ans=0;
    if(ind==n)return 1;
    if(dp[curr][n-ind]!=-1)return dp[curr][n-ind];
    if(curr==k)
    {
        ans=(21*solve(0,ind+1))%mod;
    }
    else
    {
        ans=(21*solve(0,ind+1)+5*solve(curr+1,ind+1))%mod;
    }
    return dp[curr][n-ind]=ans;
}
class Solution
{
  public:
    int kvowelwords(int nn, int kk) {
        // Write Your Code here
        n=nn;
        k=kk;
        for(ll i=0;i<=max(n,k);i++)
        {
            for(ll j=0;j<=max(n,k);j++)
            dp[i][j]=-1;
        }
        return solve(0,0);
        
    }
};