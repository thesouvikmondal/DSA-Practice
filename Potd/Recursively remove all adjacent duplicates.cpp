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
    string remove(string s){
        // code here 
        bool chng = false;
        string ans = "";
        int i =0;
        while(i<s.length()) {
            if(i+1<s.length() && s[i] != s[i+1]) {
                ans += s[i];
                i++;
            }
            else if(i+1<s.length() && s[i] == s[i+1]) {
                chng = true;
                char ch = s[i];
                while(ch == s[i]) {
                    i++;
                }
                
            }
            else if(i+1 == s.length()) {
                ans += s[i++];
            }
        }
        if(chng) return remove(ans);
        else return ans;
    }
};