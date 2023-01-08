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
long long countPairs(int n, int arr[], int k){

        // code here

     unordered_map<int,int> map;     

     int res=0;

     

     for(int i=0;i<n;++i){

          if(map.find(arr[i]%k)!=map.end()){

            res+=map[arr[i]%k];  

          }

          map[arr[i]%k]++; 

      }

     return res;

    }

};