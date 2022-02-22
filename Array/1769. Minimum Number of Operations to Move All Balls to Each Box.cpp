#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
using std::vector;
using std::string;
using std::max;
class Solution {
public:
    vector<int> minOperations(string box) {
       
        int n=box.size();
        vector<int> vec(n);
        int forw=0;
        int back=0;
        
        for(int i=0;i<n;i++){
            if(box[i]=='1'){
                forw++;
                vec[0]+=i;
            }
        }
        
        if(box[0]=='1'){
            forw--;
            back++;
        }
        
        for(int i=1;i<n;i++){
            vec[i]+=vec[i-1]-forw+back;
            
            if(box[i]=='1'){
            forw--;
            back++;
        }
            
        }
        
        
        return vec;
        
    }
};