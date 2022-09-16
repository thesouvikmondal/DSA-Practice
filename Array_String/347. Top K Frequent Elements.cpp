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
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        
       unordered_map<int, int> mp;
        for(auto x : nums){
            mp[x]++;
        }
        
        multiset<pair<int, int>> st;
        for(auto x : mp){
            st.insert({x.second, x.first});
        }
        
        auto it = st.end();
        it--;
        
        vector<int> res;
        while(k--){
            res.push_back((*it).second);
            it--;
        }
        
        // for (auto x : m){
        //     cout << x.first << " " << x.second << endl;
        // }  
        
        return res;
    }
};