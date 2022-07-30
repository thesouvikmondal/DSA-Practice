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
    char firstRep (string s)
    {
        vector<int> c(26,0);
        char ans='#';
        for(int i=s.length()-1;i>=0;i--){
            if(c[s[i]-'a']) ans=s[i];
            c[s[i]-'a']++;
        }
        return ans;
    }
};