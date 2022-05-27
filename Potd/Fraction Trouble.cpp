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
     vector<int> numAndDen(int n, int d) {
       double val = (double)n/d;
       double mx = -1;
       vector<int> ans;
       for(int i = n+1; i <= 10000; i++){
           int j = (i*d) / n + 1;
           if(j > 10000) break;
           double v = (double)i/j;
           if(v < val && v > mx){
               mx = v;
               ans = {i,j};
           }
       }
       return (ans);
   }
};