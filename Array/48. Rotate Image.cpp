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
    void rotate(vector<vector<int>>& matrix) {
        int mat[matrix.size()][matrix[0].size()];
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                mat[i][j]=matrix[j][i];
            }
        }
        
         for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size()/2;j++){
                int arr=mat[i][j];
                mat[i][j]=mat[i][matrix[0].size()-1-j];
                mat[i][matrix[0].size()-1-j]=arr;
            }
         }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                matrix[i][j]=mat[i][j];
            }
        }
    }
};
