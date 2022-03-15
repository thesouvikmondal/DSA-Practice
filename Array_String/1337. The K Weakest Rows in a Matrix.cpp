#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
using std::vector;
using std::string;
using std::max;
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        vector<int> vec;
        
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            vec.push_back(count);
        }
         vector<int> vect;
        for(int i=0;i<=mat[0].size();i++){
            for(int j=0;j<vec.size();j++){
                if(i==vec[j]){
                    vect.push_back(j);
                }
            }
        }
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(vect[i]);
        }
        
        return ans;
    }
};