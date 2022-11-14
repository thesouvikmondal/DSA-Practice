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
int numberOfSubsequences(string S, string W){
        // code here 
       int i=0;
       int cunt=0;
        
       while(i<S.size()){
            int k=0;
            for(int j=i;j<S.size();j++){
                if(W[k]==S[j]){
                   
                       if(k==0)
                       i=j+1;
                       
                        k++;
                       S[j]='-1';
                }
                if(k==W.size())
                    break;
         }
            
            if(k==W.size()) cunt++;
            else break;
      }
        
     return cunt;  
    }
};