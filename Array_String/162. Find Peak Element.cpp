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
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n=nums.size();
        int m=INT_MIN;
        if(n==1) return 0;
        
        for(int i=1;i<n-1;i++){
            
            if(nums[i]>nums[i+1] && nums[i]>nums[i-1]){
                return i;
            }
        }
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;
        
        
        return 0;
    }
};