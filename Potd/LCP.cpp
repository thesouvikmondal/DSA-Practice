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
    string LCP(string ar[], int n)
    {
        string ans=ar[0];
        for(int i=1;i<n;i++){
            int j=0;
            for(;j<min(ar[i].size(),ans.size());j++){
                if(ar[i][j]!=ans[j]) break;
            }
            ans=ans.substr(0,j);
            
        }
        return ans==""?"-1":ans;
        
        // code here
    }
};