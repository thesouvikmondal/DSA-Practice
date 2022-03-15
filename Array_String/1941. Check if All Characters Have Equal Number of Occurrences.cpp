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
    bool areOccurrencesEqual(string s) {
        int n=s.length();
        int arr[26]={0};
        for(int i=0;i<n;i++){
            
                
            arr[s[i]-97]++ ;
        }
       sort(arr, arr+26);
        
        int i=0;
        while(i<26 && arr[i]==0){
            i++;
            
        }
        for(;i<25;i++){
            
            if(arr[i]!=arr[i+1]){
                return false;
            }
        }
        
        return true;
    }
};