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
class Solution {
   public:

    int minSteps(int arr[], int n, int k) {
        // code here
        if(n==1) return 0;
        std::sort(arr,arr+n);
        
        int prefix[n+1];
        prefix[0] = 0;
        
        for(int i=0;i<n;i++)
          prefix[i+1] = arr[i] + prefix[i];
    
        int c = INT_MAX;
        
        for(int i=0;i<n;i++)
        {
            int up = std::upper_bound(arr, arr+n, arr[i]+k) - arr;
            int rem = prefix[n] - prefix[up];
            int cal = (arr[i]+k) * (n-up);
            int diff = (rem - cal)+ prefix[i]; 
            
            c = std::min(c,diff);
        }
        return c;
    }
};