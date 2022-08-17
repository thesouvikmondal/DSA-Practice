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
    int maxSubArray(vector<int>& nums) {
        
        
        //optimal soln(O(n))
        int sum=0;
        int maxx=INT_MIN;
        for(auto x:nums){
            sum+=x;
            maxx=max(maxx,sum);
            if(sum<0) sum=0;
        }
        return maxx;
        
        
        
        
        
        
        //brute force (O(n2))
//         int maxi=INT_MIN;
        
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             int sum=0;
//             for(int j=i;j<n;j++){
//                 sum+=nums[j];
//                 maxi=max(maxi,sum);
                
//             }
            
//         }
        
//         return maxi;
        
        
        
        
        //brute force(O(n3))
        
//         int maxi=INT_MIN;
        
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             for(int j=i;j<n;j++){
//                 int sum=0;
//                 for(int k=i;k<=j;k++){
//                     sum+=nums[k];
//                 }
//                 maxi=max(maxi,sum);
                
//             }
            
//         }
        
//         return maxi;
        
    }
};