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
    string longestCommonPrefix(vector<string>& str) {
        int mi=INT_MAX;
        if(str.size()==0){
            return "";
        }
        if (str.size() == 1){
             return str[0];
         }     
        string c=str[0];
        for(int i=1;i<str.size();i++){
            int j=0,k=0,a=0;
            while(j<c.length() && k<str[i].size()){
                if(c[j]==str[i][k]){
                    a++;
                }
                else{
                    break;
                }
                j++;
                k++;
            }
            mi=min(mi,a);
        }
        return c.substr(0,mi);
    }
};