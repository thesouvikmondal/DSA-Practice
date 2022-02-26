#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
using std::vector;
using std::string;
using std::max;
class Solution
{
    public:
    int LCS(string str1,string str2,int n,int m){
       int t[n+1][m+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0 || j==0){
                    t[i][j]=0;
                }
            }
        }
         for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(str1[i-1]==str2[j-1])
                {
                    t[i][j]=1+t[i-1][j-1];
                }
                else{
                    t[i][j]= max(t[i-1][j],t[i][j-1]);
                }
            }
             
         }
         return t[n][m];
        
    }
    int build_bridges(string str1, string str2)
    {
        int n=str1.length();
        int m=str2.length();
        if(n==0 || m==0)return 0;
        
        return LCS(str1,str2,n,m);
        // code here
    }
};