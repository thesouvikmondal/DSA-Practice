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
    int smallestSumSubarray(vector<int>& a){
      int sum =0;
      int minSum = INT_MAX;
      for(int i=0; i<a.size(); i++){
          sum += a[i];
          minSum = min(minSum,sum);
          if(sum>0) sum = 0;
      }
      return minSum;
  }
};