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
int splitArray(int arr[] ,int N, int K) {
        int l=*max_element(arr,arr+N),r=accumulate(arr,arr+N,0);
        int ans=-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(possible(m,arr,N,K)){
                ans=m;
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return ans;
    }
    bool possible(int m, int arr[],int n,int k){
        
        int sum=0,c=1;
        for(int i=0;i<n;i++){
            if(sum+arr[i]>m){
                sum=arr[i];
                c++;
            }
            else{
                sum+=arr[i];
            }
        }
        if(c<=k)return true;
        return false;
        
    }
};