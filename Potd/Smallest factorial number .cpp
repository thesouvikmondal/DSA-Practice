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
        int findNum(int n)
       {
           int l = 1, r = 5*n;
           while(l<r){
               int mid = (l+r)/2;
               int cnt = 0;
               for(int i=5;i<=mid;i *= 5){
                   cnt += (mid/i);
               }
               if(cnt<n) l = mid+1;
               else r = mid;
           }
           return l;
       }
};