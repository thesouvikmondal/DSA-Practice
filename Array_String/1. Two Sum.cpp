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
    vector<int> twoSum(vector<int>& nums, int target) {
        //using hash table
        unordered_map<int,int> m;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            
            if(m.find(nums[i])==m.end()){
            m.insert({nums[i],i});
            }
            
            if(m.find(target-nums[i]) !=m.end() && i !=m[target-nums[i]])             {
                ans.push_back(i);
                ans.push_back(m[target-nums[i]]);
            }
        }
        
        return ans;
        
        
        
        //by brute force
//         int n=nums.size();
//         vector<int> vec;
//         unordered_map<int,int>m;
//         for(int i=0;i<n;i++){
//             int dif=target-nums[i];
//             if(m.find(dif)!=m.end() && m.find(dif)->second !=i){
//                 vec.push_back(i);
//                 vec.push_back(m.find(dif)->second);
//             }
//             else{
//                 m[nums[i]]=i;
//             }
          
//         }
//         return vec;
    }
};