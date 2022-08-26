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
    vector<int> original;
    int n;
    
public:
    Solution(vector<int>& nums) {
        original=nums;
        n=nums.size();
    }
    
    vector<int> reset() {
        return original;
    }
    
    vector<int> shuffle() {
        vector<int> suff=original;
        int lastele=n;
        for(int i=n-1;i>=0;i--){
            int j=rand()%lastele;
            swap(suff[i],suff[j]);
            lastele--;
        }
        return suff;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */