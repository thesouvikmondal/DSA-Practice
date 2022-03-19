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
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> vec;
        for(int i=0;i<n;i++){
            vec.push_back(nums1[i]);
        }
        
        for(int i=0;i<m;i++){
            vec.push_back(nums2[i]);
        }
        
        sort(vec.begin(),vec.end());
         double sum=0;
        if((m+n)%2==0){
           return (vec[(m+n)/2]+vec[(m+n)/2-1])/2.0;
        }
        
        else{
            return vec[(m+n)/2];
        }
        
        
        
        return 0;
    }
};