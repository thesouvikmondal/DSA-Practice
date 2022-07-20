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
class Solution{
     public:
    int countMin(string A){
       
       
         int n=A.length();
      vector<vector<int>>dp(n,vector<int>(n));
      for(int g=0;g<n;g++)
      {
          for(int i=0,j=g;j<n;j++,i++)
          {
              if(g==0)
              {
                  dp[i][j]=1;
              }
              else if(g==1)
              {
                  dp[i][j]=A[i]==A[j]?2:1;
              }
              else
              {
                   if(A[i]==A[j])
                       dp[i][j]=2+dp[i+1][j-1];
                   else
                       dp[i][j]=max(dp[i][j-1],dp[i+1][j]);
                   
              }
          }
      }
      return A.length()-dp[0][n-1];
    }
};