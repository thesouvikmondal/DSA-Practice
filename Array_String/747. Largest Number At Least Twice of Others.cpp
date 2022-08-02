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
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(nums[i]);
        }
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<n;i++){
            if(v[n-1]>=(2*v[n-2])){
                ans=v[n-1];
            }
            else ans= -1;
        }
        
        for(int i=0;i<n;i++){
            if(nums[i]==ans){
                return i;
            }
        }
        return -1;
    }
};