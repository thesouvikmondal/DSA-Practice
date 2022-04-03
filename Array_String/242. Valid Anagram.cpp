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
    bool isAnagram(string s, string t) {
        
        // vector<int> vecs(0,26);
        // vector<int> vect(0,26);
        int vecs[26] = {0};
        int vect[26] = {0};
        
        for(int i=0;i<s.length();i++){
            vecs[s[i]-'a']++;
        }
        
        for(int i=0;i<t.length();i++){
            vect[t[i]-'a']++;
        }
        
        for(int i=0;i<26;i++){
            if(vecs[i]!=vect[i]){
                return false;
            }
        }
        
        return true;
        
    }
};