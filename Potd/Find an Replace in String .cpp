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
class Solution{
    public:
    string findAndReplace(string S ,int Q, int index[], string sources[], string targets[]) {
        // code here
        string str=S;
        int idx=0;
        for(int i=0;i<Q;i++){
            int ind=index[i];
            string src=sources[i];
            if(S.substr(ind,src.length())==src){
                str.replace(ind+idx,src.length(),targets[i]);
                idx+=targets[i].length()-src.length();
            }
        }
        return str;
    }
};