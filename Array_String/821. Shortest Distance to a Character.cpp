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
using std::min;
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size();
        vector<int> vec(n,INT_MAX);
        int pos=-1;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                pos=i;
            }
            if(pos!=-1){
                vec[i]=i-pos;
            }
        }
        
        pos=-1;
        for(int i=n-1;i>=0;i--){
            if(s[i]==c){
                pos=i;
            }
            if(pos!=-1){
                vec[i]=min(vec[i],(pos-i));
            }
        }
        
        return vec;
    }
};