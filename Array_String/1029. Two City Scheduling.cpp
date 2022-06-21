#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
using std::vector;
using std::string;
using std::max;
using namespace std;
class Solution {
    public:
     static bool relaCost(vector<int>&a , vector<int>&b){
            return a[1]-a[0]>b[1]-b[0];
        }
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
       
        
        int sum=0;
        sort(costs.begin(),costs.end(),relaCost);
        
        for(int i=0;i<costs.size()/2;i++){
            sum+=costs[i][0];
        }
        
        for(int i=costs.size()/2;i<costs.size();i++){
            sum+=costs[i][1];
        }
        return sum;
    }
};