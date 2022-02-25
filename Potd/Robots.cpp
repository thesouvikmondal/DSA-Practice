#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
using std::vector;
using std::string;
using std::max;
class Solution{   
public:
    string moveRobots(string s1, string s2){
        // code here 
        if(reduce(s1)!=reduce(s2))
            return "No";
            
        int n=s1.size();
        int c=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s1[i]=='A')
                c++;
            if(s2[i]=='A')
                c--;
            if(c<0)
                return "No";
        }
        c=0;
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='B')
                c++;
            if(s2[i]=='B')
                c--;
            if(c<0)
                return "No";
        }
        return "Yes";
    }
    
    string reduce(string s1)
    {
        string temp="";
        for(int i=0;i<s1.size();i++)
            if(s1[i]!='#')
                temp+=s1[i];
        return temp;
    }
};