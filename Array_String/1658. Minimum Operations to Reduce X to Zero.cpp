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
    int minOperations(vector<int>& nums, int x) {
//         int n=nums.size();
//         if(nums[0]>x || nums[n-1]>x) return -1;
//         int i=0,j=n-1,count=0;
//         while(i<j){
//             if(nums[i]<nums[j]){
//                 x=x-nums[i];
//                 count++;
//                 i++;
//                 break;
//             }
//             else{
//                x-=nums[j];
//                 count++;
//                 j--;
//                 break;
//             }
//         }
        
//         return count;
        
        int start =0;
        int end =0;
        int totalsum = accumulate(nums.begin(),nums.end(),0); 
        int sum_to_make = totalsum - x; 
        if(totalsum==x)return nums.size();
        int ans = 0;
        int sum =0;
        
        while(end<nums.size())
        {  sum+=nums[end]; 
            
         while(start<end && sum>sum_to_make) 
         {
             sum-=nums[start++]; 
         }
         if(sum==sum_to_make) 
         {
             ans = max(ans,end-start+1); 
         }
         
           end++;
            
        }
        
        return ans==0 ? -1 : nums.size()-ans;
        
    }
};