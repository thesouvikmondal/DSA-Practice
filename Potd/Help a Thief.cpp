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
    int maxCoins(int A[], int B[], int T, int N) {
         vector<pair<int,int>>v;
       for(int i=0;i<N;i++){
           v.push_back({B[i],A[i]});
       }
       int ans=0;
       sort(v.begin(),v.end());
       for(int i=v.size()-1;i>=0;i--){
           int a=v[i].second;
           int b=v[i].first;
           if(T>=a){
                T-=a;
                ans+=(a*b);
           }else if(T<a or T==0){
               ans+=(T*b);
               break;
           }
       }
       return ans;
   }
};