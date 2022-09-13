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
    int lengthOfLongestSubstring(string s) {
        int count[256]={0};
        int l=0,r=0;
        int ans=0;
        while(r<s.length()){
            count[s[r]]++;
            
            while(count[s[r]]>1){
                count[s[l]]--;
                l++;
            }
            ans=max(ans,(r-l+1));
            r++;
        }
        
        return ans;
    }
};