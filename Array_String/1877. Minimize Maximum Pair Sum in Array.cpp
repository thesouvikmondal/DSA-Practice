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
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0,j=n-1;
        vector<int> vec;
        while(i<n){
            int sum=0;
            sum=nums[i]+nums[j];
            vec.push_back(sum);
            i++;
            j--;
        }
        
        int max=*max_element(vec.begin(),vec.end());
        return max;
    }
};