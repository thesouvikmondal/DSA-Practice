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
    int longestConsecutive(vector<int>& nums) {
        int count=1,mx=INT_MIN;
        set<int> s;
        int n=nums.size();
        
        if(n== 0) return 0;
        if(n== 1) return 1;
        
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        
        for(int i:s){
            if(s.find(i+1)!=s.end()){
                count++;
            }
            else{
                mx=max(mx,count);
                count=1;
            }
        }
        
        mx=max(mx,count);
        
        // for(int x:s){
        //     cout<<x<<endl;
        // }
        return mx;
        
        
        
    }
};