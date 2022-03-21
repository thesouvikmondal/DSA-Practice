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
class Solution {
    public:
        int minRepeats(string A, string B) {
            // code here
            int k=1;
            string s=A;
            while(s.size()<B.size()){
                s+=A;
                k++;
            }
            int idx=s.find(B);
            if(idx!=-1){
                return k;
            }
            s+=A;
            k++;
            idx=s.find(B);
            if(idx!=-1){
                return k;
            }
            return -1;
        }
    };