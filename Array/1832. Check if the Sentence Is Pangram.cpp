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
    bool checkIfPangram(string s) {
        //97-122
        int arr[26]={0};
        
       
    for(int i=0;i<s.length();i++){
       int count=0;
        for(int j=97;j<=122;j++){
            if(s[i]==j){
                count++;
            }
        }
        arr[s[i]-97]=count;
    }
        
        
    for(int i=0;i<26;i++){
        if(arr[i]==0){
            return false;
        }
    }
           
        return true;
    }
};