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
    bool isArthimatic(vector<int> &vec){
        int n=vec.size();
        if(n==2){
            return true;
        }
        int dif=vec[1]-vec[0];
        for(int i=2;i<n;i++){
            if(vec[i]-vec[i-1]!=dif){
                return false;
            }
        }
        return true;
    }
    
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        int m=r.size();
        for(int i=0;i<m;i++){
            int x=l[i];
            int y=r[i];
            vector<int> vec;
            for(int j=x;j<=y;j++){
                vec.push_back(nums[j]);
            }
            sort(vec.begin(),vec.end());
            if(isArthimatic(vec)){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};