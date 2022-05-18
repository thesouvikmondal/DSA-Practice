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
class Solution{

public:

    void helper(string sb,string s,vector<string> &vc){
    if(s.length()==0){
        vc.push_back(sb);
        return;
    }
    
    char c1 = s[0];
    helper(sb+" "+c1,s.substr(1),vc);
    helper(sb+c1,s.substr(1),vc);
}
    vector<string> permutation(string S){
        // Code Here
        vector<string> vc;
        string sb = "";
        sb += S[0];
        S = S.substr(1);
        helper(sb,S,vc);
        return vc;
    }
};