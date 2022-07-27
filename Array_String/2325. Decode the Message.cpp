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
   string decodeMessage(string key, string message) {
    unordered_map<char,char>umap;
    int f=0;
    for(char i:key){
    if(!umap[i] && i!=' '){
    umap[i]=char(97+f);
    f++;
    }
    }
    string s="";
    for(auto i:message){
    if(i==' ')
    s.push_back(' ');
    else
    s.push_back(umap[i]);
    }
    return s;
    }
};