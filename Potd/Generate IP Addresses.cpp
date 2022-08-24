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
    bool isvalid(string &s,int i,int j,int k)
  {
      if(i+1>3 || j-i>3 || k-j>3 || s.length()-k-1>3) return false;
      string str1 = s.substr(0,i+1);
      string str2  = s.substr(i+1,j-i);
      string str3  = s.substr(j+1,k-j);
      string str4 = s.substr(k+1);
      if(stoi(str1)>255 || stoi(str2)>255 || stoi(str3)>255 || stoi(str4)>255) return false;
      if(str1[0]=='0' && i+1>1) return false;
      if(str2[0]=='0' && j-i>1) return false;
      if(str3[0]=='0' && k-j>1) return false;
      if(str4[0]=='0' && s.length()-k-1>1) return false;
      return true;
  }
    vector<string> genIp(string &s) {
        // Your code here
        int n = s.length();
        vector<string>ans;
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                for(int k=j+1;k<n-1;k++)
                {
                   if(isvalid(s,i,j,k))
                   {
                       string str = s.substr(0,i+1)+'.'+s.substr(i+1,j-i)+'.'+s.substr(j+1,k-j)+'.'+s.substr(k+1);
                       ans.push_back(str);
                   }
                }
            }
        }
     return ans;
    }

};