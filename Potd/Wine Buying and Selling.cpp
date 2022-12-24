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
long long int wineSelling(vector<int>& Arr, int N){
      //Code here.
      long long int sum = 0;
      long long int a = 0;
      for(int i=0;i<N;i++){
          a += Arr[i];
          sum += abs(a);
      }
      return sum;
  }
};
