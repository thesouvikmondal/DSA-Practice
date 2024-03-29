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

struct alphanumeric {
    string name;
    int count;
};

class Solution {
public:
 vector<alphanumeric> sortedStrings(int N, vector<string> A) {
        vector<alphanumeric> ans;
        map<string,int> mp;
        for(int i=0;i<N;i++){
            string s = A[i];
            mp[s]++;
        }
        
        for(auto x:mp){
            alphanumeric tp;
            tp.name = x.first;
            tp.count = x.second;
            ans.push_back(tp);
        }
        
        return ans;
    }
};