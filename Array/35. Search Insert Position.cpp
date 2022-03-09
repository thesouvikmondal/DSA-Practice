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
    int searchInsert(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]==target){
                return m;
            }
            else if(nums[m]<target){
                l=m+1;
            }
            else {
                h=m-1;
            }
        }
        return l;
    }
};