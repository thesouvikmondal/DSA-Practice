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
class Solution {
     public:
    // s : given string
    // return the expected answer
    int fun(string &s) {
        //code here
        long mod = 1000000007, a = 0, ab = 0, abc = 0;
        
        for(int i = 0; i < s.length(); i++){
            if(s.at(i) == 'a') a = (2*a+1)%mod;
            else if(s.at(i) == 'b') ab = (2*ab+a)%mod;
            else abc = (2*abc+ab)%mod;
        }
        return abc;
    }
};