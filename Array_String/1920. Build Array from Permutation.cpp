#include<iostream>
#include<vector>
using std::vector;
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
     vector<int> result(nums.size(),0);
       
        for(int i=0;i<nums.size();i++){
            result[i]=nums[nums[i]];
    }
        return result;
    }
};