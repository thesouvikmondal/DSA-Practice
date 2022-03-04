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
    vector<int> canMakeTriangle(vector<int> A, int N){
        // code here
        vector<int> ans(N-2);
        
        for(int i=2;i<N;i++)
        {
            int a = A[i-2];
            int b = A[i-1];
            int c = A[i];
            
            if((a+b>c) and (a+c>b) and (b+c>a))
                ans[i-2]=1;
            else ans[i-2]=0;
        }
        return ans;
    }
}; 