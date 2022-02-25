#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
using std::vector;
using std::string;
using std::max;
class Solution{
public:
    vector<int> primeDivision(int n){
        
        
        
            int prime[100000]={0};
            prime[0]=1;
            prime[1]=1;
            for(int i=2;i<=n;i++){
                if(prime[i]==0){
                    for(int j=i*i;j<n;j+=i){
                        prime[j]=1;
                    }
                }
                
            }
            
            vector<int> vec;
            for(int i=2;i<=n;i++){
                if(prime[i]==0 && prime[n-i]==0){
                    vec.push_back(i);
                    vec.push_back(n-i);
                }
            }
        
        return vec;
    }
};