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
    int findMaxAverage(int arr[], int n, int k) {
        // code here
        int sum=0; int idx=0;
       for(int i=0;i<k;i++)
       sum+=arr[i];
       int ans=sum;
       for(int i=k;i<n;i++)
       {
           sum=sum+arr[i]-arr[i-k];
           if(sum>ans)
          { ans=sum;
           idx=i-k+1;
          }
          
       }
       return idx;
    }
};