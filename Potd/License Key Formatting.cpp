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
string ReFormatString(string S, int K){

     string ans = "";

     int cnt = 0;

     for(int j=S.size()-1; j>=0; j--) {

         if(S[j] != '-'){

             cnt++;

                ans += toupper(S[j]);

             if(cnt == K) {

                 ans += "-";

                 cnt = 0;

             }

         }

     }

     if(ans[ans.size()-1] == '-'){  ans.pop_back(); }

        reverse(ans.begin(),ans.end());

     return ans;

    }
};