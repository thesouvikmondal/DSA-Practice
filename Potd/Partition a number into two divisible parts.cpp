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
    string stringPartition(string S, int a, int b){
       int n=S.size(),i=0,j=n-1;
       for(int k=1;k<n;k++)
       {
           string s1=S.substr(i,k),s2=S.substr(k,n-k);
           if((stoi(s1)%a==0) and (stoi(s2)%b)==0)return s1+" "+s2;
       }
       return "-1";
    }
};