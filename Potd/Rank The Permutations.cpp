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
class Solution{
  public:
    long long fact(int n)
    {
        long long res=1;
        for(int i=1;i<=n;i++)
        res*=i;
        
        return res;
    }
    long long findrank(string str)
    {
        if(str.length()==1)
            return 1;
        
        string sorted=str;
        sort(sorted.begin(),sorted.end());
        long long i;
        for(i=0;i<sorted.length();i++)
        {
            if(str[0]==sorted[i])
            {
                break;
            }
        }
        int n=str.length();
        long long fac=fact(n-1);
        long long val=i*fac;
        return val+findrank(str.substr(1,n-1));
        
    }
    long long findRank(string str)
    {
        
        return findrank(str);
    }
};
