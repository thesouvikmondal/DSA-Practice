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
    long long int check(long long int k)
    {
        return (k*(k+1)*(2*k+1))/6;    // sum of squares upto Kth number
    }
    long long int killinSpree(long long int n)
    {
        if(n==1) return n;
       long long int l=1,r=min(n/2,(long long int)100000),m,k;
       while(l<=r)
       {
           m= l + (r-l)/2;
           k= check(m);
           if(k==n) return m;
           else if(k>n)
           r=m-1;
           else
           l=m+1;
       }
       return l-1;
    }
};