#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
using std::vector;
using std::string;
using std::max;
using namespace std;
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int sum=0;
        int n=words.size();
        int m=pref.size();
        for(int i=0;i<n;i++){
            bool flag=0;
            if(words[i].length()<m){
                continue;
            }
            
            for(int j=0;j<m;j++){
               if(words[i][j] != pref[j]){
                   flag =1;
                   break;
               }
            }
            if(flag==0){
            sum++;
        }         
        }
        return sum;
        
    }
};