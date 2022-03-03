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
    int majorityElement(vector<int>& nums) {
        //brute force time limit execeded.
        int n=nums.size();
        vector<int> vec;
        int i=0;

        for(;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count>n/2){
                return nums[i];
            }
        }
        return 0;
    }
};