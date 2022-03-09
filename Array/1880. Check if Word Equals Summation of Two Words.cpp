#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
using std::vector;
using std::string;
using std::max;
class Solution {
public:
    bool isSumEqual(string fW, string sW, string tW) {
        int s1=0;
        int s2=0;
        int s3=0;
        for(int i=0;i<fW.size();i++){
            s1=(s1*10)+(fW[i]-'a');
     
        }
          for(int i=0;i<sW.size();i++){
            s2=(s2*10)+sW[i]-'a';
     
        }
         for(int i=0;i<tW.size();i++){
            s3=(s3*10)+tW[i]-'a';
     
        }
        if(s1+s2==s3){
            return true;
        }
        return false;
    }
};