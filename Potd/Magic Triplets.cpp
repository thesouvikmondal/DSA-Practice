#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <iterator>
#include <set>
using std::vector;
using std::max;
using namespace std;
class Solution {
public:
int countTriplets(vector<int>nums){
	    // Code here.
	    int ans=0;
	    for(int j=0;j<nums.size();j++) {
	        int small =0;
	        for(int i=0;i<j;i++) {
	            if(nums[i]<nums[j]) small++;
	        }
	        
	        int large =0;
	        for(int k=j+1;k<nums.size();k++) {
	            if(nums[j]<nums[k]) large++;
	        }
	        ans+=(small*large);
	    }
	    return ans;
	}
};