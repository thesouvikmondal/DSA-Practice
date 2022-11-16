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
int beautySum(string s) {
        // Your code goes here
        int ans=0;
        for(int i=0;i<s.length();i++) {
            vector<int> fre(26,0);
            for(int j=i;j<s.length();j++) {
                fre[s[j]-'a']++;
                ans+=findBeauty(fre);
            }
        }
        return ans;
    }
    
    int findBeauty(vector<int> fre) {
        int mx=INT_MIN,mn=INT_MAX;
        for(int f : fre) {
            if(f==0) continue;
            mx = max(mx,f);
            mn = min(mn,f);
        }
        return mx-mn;
    }
};