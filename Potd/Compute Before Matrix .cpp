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
class Solution{
    public:
    vector<vector<int>> computeBeforeMatrix(int N, int M, vector<vector<int>> arr){
       vector<vector<int>>v;
      
       int res=0;
       int element;
        for(int i=0;i<N;i++){
             vector<int>v1;
            for(int j=0;j<M;j++){
                if(i==0 && j==0){
                    v1.push_back(arr[i][j]);
                }else if(i==0 && j>=0){
                    v1.push_back(arr[i][j] - arr[i][j-1]);
                }else if(i>=0 && j==0){
                    v1.push_back(arr[i][j] - arr[i-1][j]);
                }else{
                v1.push_back(arr[i][j] - arr[i][j-1]- arr[i-1][j] + arr[i-1][j-1]);
                }
            }
            v.push_back(v1);
        }
        return v;
    }
};