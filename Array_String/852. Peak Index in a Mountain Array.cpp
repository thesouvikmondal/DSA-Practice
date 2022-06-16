//using one triverse
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
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int p=INT_MIN;
        for(int i=0;i<n;i++){
                p=max(p,arr[i]);
            
        }
        for(int i=0;i<n-1;i++){
            if(p==arr[i]){
                return i;
            }
        }
        return -1;
    }
};