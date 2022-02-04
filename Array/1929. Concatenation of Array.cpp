#include<iostream>
#include<vector>
using std::vector;
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n= 2 * nums.size();
        int m=nums.size();
        // vector<int> anss(nums.size(),o);
        vector<int> ans(n,0);
        
        for(int i=0;i<n/2;i++){
            ans[i]=nums[i];
            ans[i+m]=nums[i];
        }
        return ans;
    }
};