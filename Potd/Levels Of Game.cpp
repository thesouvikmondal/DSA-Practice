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
    unordered_map<int,vector<int>> dp;
       int help(int prev,int h,int m)
       {
           if(h<=0 || m<=0)
            return 0;
           if(dp.find(prev)!=dp.end())
           {
               vector<int> temp=dp[prev];
               return temp[2];
           }
           else
           {
               if(prev==1)
               {
                   int y=1+help(2,h-5,m-10);
                   int z=1+help(3,h-20,m+5);
                   int ans=max(y,z);
                   dp[prev]={h,m,ans};
                   return ans;
               }
               else if(prev==2)
               {
                   int x=1+help(1,h+3,m+2);
                   int z=1+help(3,h-20,m+5);
                   int ans=max(x,z);
                   dp[prev]={h,m,ans};
                   return ans;
                   
               }
               else if(prev==3)
               {
                   int x=1+help(1,h+3,m+2);
                   int y=1+help(2,h-5,m-10);
                   int ans=max(x,y);
                   dp[prev]={h,m,ans};
                   return ans;
               }
           }
       }
       int maxLevel(int h,int m)
       {
           // code here
           dp.clear();
           return help(1,h+3,m+2);
       }
};