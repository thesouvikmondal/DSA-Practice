#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <iterator>
#include <set>
using std::vector;
using std::max;
using namespace std;
class Solution {
public:
vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        vector<vector<string>> ans;
        vector<string> contact2;
        set<string> st;
        for(int i=0;i<n;i++){
            st.insert(contact[i]);
        }
        for(auto it:st){
            contact2.push_back(it);
        }
        int m = s.length();
        sort(contact2.begin(),contact2.end());
        n = contact2.size();
        for(int i=0;i<m;i++){
            string temp = s.substr(0,i+1);
            vector<string> temp1;
            int count = 0;
            for(int j=0;j<n;j++){
                if(contact2[j].substr(0,i+1) == temp){
                    temp1.push_back(contact2[j]);
                    count++;
                }
            }
            sort(temp1.begin(),temp1.end());
            if(count == 0){
                ans.push_back({"0"});
            }
            else
                ans.push_back(temp1);
        }
        return ans;
    }
};