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
    public:
    int lenOfLongSubarr(int a[],  int N, int k) 
    { 
        // Complete the function
        vector<int> pref(N);
        
        long long sum = 0;
        
        for(int i=0;i<N;i++){
            sum += a[i];
            pref[i] = sum;
        }
        unordered_map<int, int> mp;
        int ans = 0;
        
        for(int i=0;i<N;i++){
            if(pref[i] == k){
                ans = max(ans, i+1);
            }
            
            int x = pref[i] - k;
            
            if(mp.find(x) != mp.end()){
                ans = max(ans, i-mp[x]);
            }
            if(mp.find(pref[i]) == mp.end()){
                mp[pref[i]] = i;
            }
            
        }
        return ans;
    } 

};