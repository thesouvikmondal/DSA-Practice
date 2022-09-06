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
class Solution{
public:
    long long findMinSum(vector<int> &A,vector<int> &B,int N){
       

       //first sort both the array
       sort(A.begin(), A.end());
       sort(B.begin(), B.end());
       
       long long ans = 0;
       

       //find difference of ith element of both the array and add it in ans
       for(int i=0; i<N; i++)
       {
           ans = ans + abs(A[i] - B[i]);
       }

      

       //return ans
       return ans;
   }
};