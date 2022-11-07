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
void shortest_distance(vector<vector<int>>&matrix){
	    int n = matrix.size();
	    for(int i = 0 ; i < n ; i++){
	        for(int j = 0; j< n ; j++){
	            for(int k = 0 ; k < n ; k++){
	                if(j==k || j==i || k==i){
	                    continue;
	                }else if(matrix[j][i] != -1 && matrix[i][k] != -1){
	                    int mini = min(matrix[j][i]+matrix[i][k], matrix[j][k]);
	                        matrix[j][k] = mini;
	                    if(mini ==-1 && matrix[j][i]+matrix[i][k] >= 0){
	                        matrix[j][k] = matrix[j][i]+matrix[i][k];
	                    }
	                }
	            }
	        }
	    }
	}
};