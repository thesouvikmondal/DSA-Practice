#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <map>
#include <iterator>
using std::vector;
using std::string;
using std::max;
class Solution {
public:	

	    int longSubarrWthSumDivByK(int arr[], int n, int k)
   {
       long long sum=0;
  int ans=0;
  std::map<int,int>m;
  m[0]=-1;
  for(int i=0;i<n;i++){
      sum+=arr[i];
      int rem=sum%k;
      if(rem<0) rem+=k;
      if(m.find(rem)!=m.end()){
          int idx=m[rem];
          ans=max(ans,i-idx);
      }
      else m[rem]=i;
  }
       return  ans;
	}
};