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
    
    int countGoodSubstrings(string s) {
        if(s.size()-1<=1){
            return 0;
        }
        int cnt=0;
        for(int i=0;i<s.size()-2;i++){
            if(s[i]==s[i+1]||s[i]==s[i+2]||s[i+1]==s[i+2]){
                continue;
            }
            cnt++;

        }
        return cnt;
    }
};