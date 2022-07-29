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
#include <bits/stdc++.h>
using namespace std;
class Solution{
      vector<int> sortedSquares(vector<int>& nums) {
       
        for(int i=0;i<nums.size();i++){
            nums[i]=abs(nums[i]);
        }
        sort(nums.begin(),nums.end());
        
        vector<int> v;
        
        for(int i=0;i<nums.size();i++){
            v.push_back(abs(pow(nums[i],2)));
        }
                        
        return v;
    }
};