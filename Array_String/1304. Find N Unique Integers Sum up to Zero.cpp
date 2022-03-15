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
    vector<int> sumZero(int n) {
        vector<int> vec(n);
        
        if(n%2==0){
            for(int i=0;i<n-1;i=i+2){
                vec[i]=i+1;
                vec[i+1]=-(i+1);
            }
        }
        
        
        else{
            for(int i=0;i<n-1;i=i+2){
                 vec[i]=i+1;
                vec[i+1]=-(i+1);
            }
            vec[n-1]=0;
        }
        
        return vec;
        
    }
};