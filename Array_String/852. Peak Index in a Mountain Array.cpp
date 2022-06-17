
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
//using one triverse

//     public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int n=arr.size();
//         int p=INT_MIN;
//         for(int i=0;i<n;i++){
//                 p=max(p,arr[i]);
            
//         }
//         for(int i=0;i<n-1;i++){
//             if(p==arr[i]){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };

//using binary search

public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0,e=arr.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return s;
    }
};