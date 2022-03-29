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
class Solution {
public:
    int singleNumber(vector<int>& nums) {
//         int m=0,sum=0,sum2=0;
//         set<int> val;
//         for(int i=0;i<nums.size()-1;i++){
//             val.insert(nums[i]);
//             sum2+=nums[i];
//         }
        
//         for(auto i=val.begin();i!=val.end();i++){
//             sum+=*i;
//         }
//         cout<<sum<<"  "<<sum2<<",,"<<val;
//         m=sum-sum2;
    //--------------------------------------------------
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]!=nums[i+1]){
        //        m=nums[i];
        //     }
        // }
        
	   // int ans=0;
	   // for(auto x:nums)
	   // ans^=x;
	   // return ans;

//--------------------------------------------------------------
        sort(nums.begin(),nums.begin()+nums.size());    //sorting
        int singleNum = 0;
        for(int i=0;i<nums.size();){        
            if(nums.size() == 1) {
                singleNum = nums[i];
                break;
            }
            if(nums[i] == nums[i+1]) i+=2;
            else {
                singleNum = nums[i];
                break;
            }
        }
        return singleNum;
    }
};
    