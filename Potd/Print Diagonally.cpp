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
vector<int> downwardDigonal(int N, vector<vector<int>> A)

 {

     int n=A.size();

     int m=A[0].size();

     map<int,vector<int>>mp;

        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){

                mp[i+j].push_back(A[i][j]);

            }

        }

        vector<int>ans;

     for(auto it:mp){

         for(int i=0;i<it.second.size();i++){

             ans.push_back(it.second[i]);

         }

     }

     return ans;

 }

};