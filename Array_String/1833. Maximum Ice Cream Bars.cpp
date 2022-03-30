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
    int maxIceCream(vector<int>& costs, int coins) {
        int n=costs.size();
        int sum=0,count=0;
        sort(costs.begin(),costs.end());
        for(int i=0;i<n;i++){
           sum+=costs[i];
           count++;
           if(coins==sum){
               return count;
           }
           else if(coins<sum){
               return count-1;
           } 
        }
        return count;
    }
};