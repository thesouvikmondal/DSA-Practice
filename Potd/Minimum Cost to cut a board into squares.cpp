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
    int minimumCostOfBreaking(vector<int> X, vector<int> Y, int M, int N){
         sort(X.rbegin(),X.rend());
         sort(Y.rbegin(),Y.rend());
         int i = 0;
         int j = 0;
         int ans =0;
         int flagx = 1;
         int flagy = 1;
         int m = X.size();
         int n = Y.size();
         while(i<M-1 && j<N-1)
         {
             if(X[i]>=Y[j])
             {
                 ans+=X[i]*flagx;
                 flagy++;
                 i++;
             }
             else{
                 ans+=Y[j]*flagy;
                 flagx++;
                 j++;
             }
         }
         while(i<M-1)
         {
             ans+=X[i]*flagx;
             flagy++;
             i++;
         }
         while(j<N-1)
         {
             ans+=Y[j]*flagy;
             flagx++;
             j++;
         }
         return ans;
         
    }
};