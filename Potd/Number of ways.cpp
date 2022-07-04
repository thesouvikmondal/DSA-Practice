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
     long long int arrangeTiles(int N){
       // recursive solution
      /* if(N<4){
           return 1;
       }
       //
       return  arrangeTiles(N-1)+arrangeTiles(N-4);*/
       
       //DP
       vector<long long int>dp(N+1,1);
       for(long long int i=4;i<=N;i++)
       dp[i]=dp[i-1]+dp[i-4];
       return dp[N];
   }
};