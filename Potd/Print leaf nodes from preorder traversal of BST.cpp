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
class Solution {
public:
unordered_map<int,int>mp;
  
  void solve(int &i,int n,int arr[],vector<int>&in,int l,int r,vector<int>&ans){
      if(i>=n||l>r)return;
      if(l==r){
          ans.push_back(arr[i]);
      }
  int ind=mp[arr[i]];
  i++;
      solve(i,n,arr,in,l,ind-1,ans);
      
      solve(i,n,arr,in,ind+1,r,ans);

      return;
  }
    vector<int> leafNodes(int arr[],int n) {
        vector<int>in(n);
        
       for(int i=0;i<n;i++)in[i]=arr[i];
       sort(in.begin(),in.end());
       
       for(int i=0;i<n;i++)mp[in[i]]=i;
       
       vector<int>ans;
       int i=0;
       solve(i,n,arr,in,0,n-1,ans);
       return ans;
        
    }
};