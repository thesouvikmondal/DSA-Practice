#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
using std::vector;
using std::string;
using std::max;
using std:: min;

class Solution{
     public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        if(n==1)return str;
        vector<bool> cas;
        int count=0;
        for(char c : str){
            if(c-'a'<=25 and c-'a'>=0)
            	cas.push_back(1);
            else count++,cas.push_back(0);
        }
        sort(str.begin(),str.end());
        string ans;
        int j=0,k=count;
        for(int i=0;i<n;i++){
            if(cas[i]==0 and j<count){
                ans+=str[j++];
            }
            else if(cas[i]==1 and k<n){
                ans+=str[k++];
            }
        }
        return ans;
    }
};