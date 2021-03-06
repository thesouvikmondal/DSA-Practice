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
      int isPossible(long long S, long long N, long long X, long long A[])
    {
        int i = 0;
        long long s = S;
        for(; i < N; i++){
            A[i] += s;
            s += A[i];
            if(s > X){
               break;
            }
        }
        if(s == X){
           return true;
        }
        while(X >= 0 && i >= 0){
            if(X >= A[i]){
                X -= A[i];
            }
            if(X == 0 || X - S == 0){
                return true;
            }
            i--;
        }
        return false;
    }
};