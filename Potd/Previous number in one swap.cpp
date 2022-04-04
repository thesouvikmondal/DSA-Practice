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
using namespace std;
class Solution {
    public:
    string previousNumber(string s){
        // code here 
        int n = s.size(), i = n-1;
        while(i>0 && s[i]>=s[i-1]) i--;
        if(i==0 || (i==1 && s[i-1]=='1')) return "-1";
        int idx = i;
        for(int j=i; j<n; j++){
            if(s[j]>s[idx] && s[j]<s[i-1]) idx = j;
        }
        if(s[idx]=='0' && i==1) return "-1";
        swap(s[idx], s[i-1]);
        return s;
    }
};