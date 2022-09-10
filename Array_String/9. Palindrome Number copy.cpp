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
    bool isPalindrome(int x) {
        
        if(x<0){
            return false;
        }
        
        int p=x, r;
        long sum=0;
        
        while(p>0){
            r=p%10;
            sum=(sum*10)+r;
            p=p/10;
        }
        
        if(x==sum){
            return true;
        }
        else{
            return false;
        }
    
    }
};