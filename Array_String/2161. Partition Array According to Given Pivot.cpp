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
    vector<int> pivotArray(vector<int>& nums, int pi) {
       vector<int> vec1;
        vector<int> vec2;
        vector<int> vec;
        int count=0;
        int n=nums.size();
        int i =0,j=0;
        for(i=0;i<n;i++){
            if(nums[i]==pi){
                count++;
                continue;
            }
            if(nums[i]<pi){
                vec1.push_back(nums[i]);
            }
            else{
                vec2.push_back(nums[i]);
            }
            
        }
        for(int p=0;p<vec1.size();p++){
            vec.push_back(vec1[p]);
        }
        
        for(int p=0;p<count;p++){
            vec.push_back(pi);
        }
        
        for(int p=0;p<vec2.size();p++){
               vec.push_back(vec2[p]);
        }
        return vec;
    }
};