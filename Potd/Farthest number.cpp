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

class solution{
    public:
  int serch(int k,int index,vector<int>&v){
      for(int i=v.size()-1;i>=index;i--){
          if(v[i]<k)
          return i;
      }
      return -1;
  }
    vector<int> farNumber(int n,vector<int> arr){
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(serch(arr[i],i+1,arr));
        }
        return ans;
    }
};
