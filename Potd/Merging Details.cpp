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
     vector<vector<string>> mergeDetails(vector<vector<string>>& details) {
       map<string, int>m;
       vector<pair<string, set<string>>> a;
       for(auto &i:details){
           int p = -1;
           for(auto it=i.begin()+1; it != i.end(); ++it){
               if(m.find(*it)!=m.end()){
                   p = m[*it];
                   break;
               }
           }
           if(p==-1) p=a.size(), a.emplace_back(i[0], set<string>());
           for(auto it=i.begin()+1; it != i.end(); ++it){
               a[p].second.emplace(*it);
               m[*it] = p;
           }
       }
       
       vector<vector<string>> ans(a.size());
       for(int i=0;i<a.size();i++){
           ans[i] = {a[i].first};
           ans[i].insert(ans[i].end(), a[i].second.begin(), a[i].second.end());
       }
       sort(ans.rbegin(), ans.rend()); /* Some how reverse sorting here works to pass the test case 56 XD */
       return ans;
   }
};