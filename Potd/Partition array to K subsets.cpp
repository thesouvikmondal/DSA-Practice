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
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool solve(int a[], int n, int k,vector<int> &vis,int target,int currSum){
        
        if(k==0)
            return 1;
            
        if(target == currSum){
            currSum=0;
            return solve(a,n,k-1,vis,target,currSum);
        }
        
        if(currSum > target)
            return 0;
        
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                vis[i] = 1;
                if(solve(a,n,k,vis,target,currSum+a[i])){
                    return 1;
                }
                vis[i] = 0;
            }
        }
        
        return 0;
    }
  public:
    bool isKPartitionPossible(int a[], int n, int k)
    {
        if(k==1)
            return 1;
        
         int sum = 0;
         
         for(int i=0;i<n;i++){
             sum+=a[i];
         }
         
         if(sum%k)
            return 0;
        
        int target = sum/k;
        vector<int> vis(n,0);
        
        return solve(a,n,k,vis,target,0);
    }
};